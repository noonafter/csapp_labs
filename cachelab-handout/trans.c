/* 
 * trans.c - Matrix transpose B = A^T
 *
 * Each transpose function must have a prototype of the form:
 * void trans(int M, int N, int A[N][M], int B[M][N]);
 *
 * A transpose function is evaluated by counting the number of misses
 * on a 1KB direct mapped cache with a block size of 32 bytes.
 */ 
#include <stdio.h>
#include "cachelab.h"

int is_transpose(int M, int N, int A[N][M], int B[M][N]);

/* 
 * transpose_submit - This is the solution transpose function that you
 *     will be graded on for Part B of the assignment. Do not change
 *     the description string "Transpose submission", as the driver
 *     searches for that string to identify the transpose function to
 *     be graded. 
 */
/* * transpose_submit - 这是你需要提交的转置函数
 */
char transpose_submit_desc[] = "Transpose submission";
void transpose_submit(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, k, h;
    int v1, v2, v3, v4, v5, v6, v7, v8;

    // --- 场景 1: 32 x 32 矩阵 ---
    if (M == 32) {
        for (i = 0; i < 32; i += 8) {
            for (j = 0; j < 32; j += 8) {
                for (k = i; k < i + 8; k++) {
                    v1 = A[k][j]; v2 = A[k][j+1]; v3 = A[k][j+2]; v4 = A[k][j+3];
                    v5 = A[k][j+4]; v6 = A[k][j+5]; v7 = A[k][j+6]; v8 = A[k][j+7];
                    B[j][k] = v1; B[j+1][k] = v2; B[j+2][k] = v3; B[j+3][k] = v4;
                    B[j+4][k] = v5; B[j+5][k] = v6; B[j+6][k] = v7; B[j+7][k] = v8;
                }
            }
        }
    }
    // --- 场景 2: 64 x 64 矩阵 (最难，使用 8x8 内部四分法) ---
    else if (M == 64) {
        for (i = 0; i < 64; i += 8) {
            for (j = 0; j < 64; j += 8) {
                for (k = i; k < i + 4; k++) {
                    // 读取 A 的上半部分 (4x8)
                    v1 = A[k][j]; v2 = A[k][j+1]; v3 = A[k][j+2]; v4 = A[k][j+3];
                    v5 = A[k][j+4]; v6 = A[k][j+5]; v7 = A[k][j+6]; v8 = A[k][j+7];
                    
                    // 填充 B 的左上角 (4x4) 和 右上角 (4x4)
                    B[j][k] = v1; B[j+1][k] = v2; B[j+2][k] = v3; B[j+3][k] = v4;
                    B[j][k+4] = v5; B[j+1][k+4] = v6; B[j+2][k+4] = v7; B[j+3][k+4] = v8;
                }
                for (k = j; k < j + 4; k++) {
                    // 巧妙利用 B 的右上角空间暂存数据，处理 A 的下半部分
                    v1 = A[i+4][k]; v2 = A[i+5][k]; v3 = A[i+6][k]; v4 = A[i+7][k];
                    v5 = B[k][i+4]; v6 = B[k][i+5]; v7 = B[k][i+6]; v8 = B[k][i+7];
                    
                    B[k][i+4] = v1; B[k][i+5] = v2; B[k][i+6] = v3; B[k][i+7] = v4;
                    B[k+4][i] = v5; B[k+4][i+1] = v6; B[k+4][i+2] = v7; B[k+4][i+3] = v8;
                }
                for (k = i + 4; k < i + 8; k++) {
                    // 处理剩余的右下角部分
                    v1 = A[k][j+4]; v2 = A[k][j+5]; v3 = A[k][j+6]; v4 = A[k][j+7];
                    B[j+4][k] = v1; B[j+5][k] = v2; B[j+6][k] = v3; B[j+7][k] = v4;
                }
            }
        }
    }
    // --- 场景 3: 61 x 67 矩阵 ---
    else {
        // 不规则矩阵，直接使用经验值 16x16 分块即可过关
        for (i = 0; i < N; i += 16) {
            for (j = 0; j < M; j += 16) {
                for (k = i; k < i + 16 && k < N; k++) {
                    for (h = j; h < j + 16 && h < M; h++) {
                        B[h][k] = A[k][h];
                    }
                }
            }
        }
    }
}


/* 
 * You can define additional transpose functions below. We've defined
 * a simple one below to help you get started. 
 */ 

/* 
 * trans - A simple baseline transpose function, not optimized for the cache.
 */
char trans_desc[] = "Simple row-wise scan transpose";
void trans(int M, int N, int A[N][M], int B[M][N])
{
    int i, j, tmp;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            tmp = A[i][j];
            B[j][i] = tmp;
        }
    }    

}

/*
 * registerFunctions - This function registers your transpose
 *     functions with the driver.  At runtime, the driver will
 *     evaluate each of the registered functions and summarize their
 *     performance. This is a handy way to experiment with different
 *     transpose strategies.
 */
void registerFunctions()
{
    /* Register your solution function */
    registerTransFunction(transpose_submit, transpose_submit_desc); 

    /* Register any additional transpose functions */
    // registerTransFunction(trans, trans_desc); 

}

/* 
 * is_transpose - This helper function checks if B is the transpose of
 *     A. You can check the correctness of your transpose by calling
 *     it before returning from the transpose function.
 */
int is_transpose(int M, int N, int A[N][M], int B[M][N])
{
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < M; ++j) {
            if (A[i][j] != B[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

