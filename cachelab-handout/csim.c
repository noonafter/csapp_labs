#include "cachelab.h"
#include "stdio.h"
// #include <unistd.h>   // 声明 getopt, optarg
#include <getopt.h>   // 有些系统 getopt 在这里
#include <stdlib.h>   // 声明 atoi, malloc, free, exit
#define MAX_TARCEFILE_LEN 100

typedef struct {
    int valid;
    unsigned long tag;
    int lru_stamp; // 计数器，值越大表示越近被访问
} cache_line;

cache_line **cache = NULL;
int hit_count = 0, miss_count = 0, eviction_count = 0;
int timer = 0; // 全局时间戳，每次访问自增

void access_cache(unsigned long addr, int s, int E, int b, int verbose);
int main(int argc, char* argv[])
{
    int s = -1, E = -1, b = -1;
    char* trace_file = NULL;
    int opt;
    int verbose = 0;
    while ((opt = getopt(argc, argv, "s:E:b:t:hv")) != -1) {
        switch (opt) {
            case 's':
                s = atoi(optarg);
                break;
            case 'E':
                E = atoi(optarg);
                break;
            case 'b':
                b = atoi(optarg);
                break;
            case 't':
                trace_file = optarg;
                break;
            case 'v':
                verbose = 1;
                break;
            default:
                printf("%s: Missing required command line argument\n", argv[0]);
                exit(1);
        }
    }

    // 强制检查：确保所有必需参数都已提供且合法
    if (s <= 0 || E <= 0 || b <= 0 || trace_file == NULL) {
        printf("%s: Missing required command line argument\n", argv[0]);
        exit(1);
    }

    // 1. 初始化 Cache 内存
    int S = 1 << s; // 组数
    cache = (cache_line**)malloc(sizeof(cache_line*) * S);
    for (int i = 0; i < S; i++) {
        cache[i] = (cache_line*)malloc(sizeof(cache_line) * E);
        for (int j = 0; j < E; j++) cache[i][j].valid = 0;
    }

    // 2. 打开并解析文件
    FILE *fp = fopen(trace_file, "r");
    if (!fp) {
        printf("Can not open file: %s\n", trace_file);
        return 1;
    }
    
    char operation;
    unsigned long address;
    int size;

    // 格式为: [空格]操作[空格]地址,大小
    while (fscanf(fp, " %c %lx,%d", &operation, &address, &size) > 0) {
        if (operation == 'I') 
            continue; // 忽略指令访问

        if (verbose) printf("%c %lx,%d", operation, address, size);

        switch (operation) {
            case 'L':
            case 'S':
                access_cache(address, s, E, b, verbose);
                break;
            case 'M':
                access_cache(address, s, E, b, verbose); // 第一次访问可能是 miss
                access_cache(address, s, E, b, verbose); // 第二次必然 hit
                break;
        }
        if (verbose) printf("\n");
    }

    // 3. 输出结果并释放内存
    printSummary(hit_count, miss_count, eviction_count);
    
    for (int i = 0; i < S; i++) free(cache[i]);
    free(cache);
    fclose(fp);
    return 0;
}


void access_cache(unsigned long addr, int s, int E, int b, int verbose) {
    unsigned long set_index = (addr >> b) & ((1 << s) - 1);
    unsigned long tag = addr >> (s + b);
    
    cache_line *target_set = cache[set_index];
    int empty_index = -1;
    int min_lru_index = 0;
    int min_lru_stamp = target_set[0].lru_stamp;

    // 1. 尝试寻找 Hit
    for (int i = 0; i < E; i++) {
        if (target_set[i].valid) {
            if (target_set[i].tag == tag) {
                hit_count++;
                target_set[i].lru_stamp = ++timer; // 更新时间戳
                if (verbose) printf(" hit");
                return;
            }
            // 顺便记录最旧的行，为可能的 eviction 做准备
            if (target_set[i].lru_stamp < min_lru_stamp) {
                min_lru_stamp = target_set[i].lru_stamp;
                min_lru_index = i;
            }
        } else {
            // 记录第一个空闲位置
            if (empty_index == -1) empty_index = i;
        }
    }

    // 2. 如果没 Hit，那就是 Miss
    miss_count++;
    if (verbose) printf(" miss");

    // 3. 寻找放置位置（冷启动写入 或 替换）
    if (empty_index != -1) {
        // 有空位，直接放入
        target_set[empty_index].valid = 1;
        target_set[empty_index].tag = tag;
        target_set[empty_index].lru_stamp = ++timer;
    } else {
        // 满员，触发 Eviction
        eviction_count++;
        target_set[min_lru_index].tag = tag;
        target_set[min_lru_index].lru_stamp = ++timer;
        if (verbose) printf(" eviction");
    }
}