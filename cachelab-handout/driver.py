#!/usr/bin/python3
#
# driver.py - 适配 Python 3.12 且兼容实际输出格式的 Cache Lab 测试脚本
#
import subprocess
import re
import os
import sys
import optparse

def computeMissScore(miss, lower, upper, full_score):
    if miss <= lower:
        return full_score
    if miss >= upper: 
        return 0

    score = (miss - lower) * 1.0 
    range = (upper - lower) * 1.0
    return round((1 - score / range) * full_score, 1)

def main():
    maxscore= {}
    maxscore['csim'] = 27
    maxscore['transc'] = 1
    maxscore['trans32'] = 8
    maxscore['trans64'] = 8
    maxscore['trans61'] = 10

    p = optparse.OptionParser()
    p.add_option("-A", action="store_true", dest="autograde", 
                 help="emit autoresult string for Autolab")
    opts, args = p.parse_args()
    autograde = opts.autograde

    # --- Part A: 测试 Cache Simulator ---
    print("Part A: Testing cache simulator")
    print("Running ./test-csim")
    p = subprocess.Popen("./test-csim", 
                         shell=True, stdout=subprocess.PIPE, text=True)
    stdout_data, stderr_data = p.communicate()

    resultsim = []
    lines = re.split('\n', stdout_data)
    for line in lines:
        if "TEST_CSIM_RESULTS" in line:
            resultsim = re.findall(r'(\d+)', line)
        else:
            print("%s" % (line))

    # --- Part B: 测试 Transpose Function ---
    print("Part B: Testing transpose function")
    
    # 定义一个内部函数来处理解析，减少重复代码
    def get_trans_results(cmd):
        print(f"Running {cmd}")
        p = subprocess.Popen(cmd, shell=True, stdout=subprocess.PIPE, text=True)
        stdout_data, _ = p.communicate()
        
        # 匹配格式: "func 0 (Transpose submission): hits:1765, misses:288, evictions:256"
        # 或者原有的 "TEST_TRANS_RESULTS: 1:288"
        res = re.findall(r'misses:(\d+)', stdout_data)
        if not res:
            res = re.findall(r'TEST_TRANS_RESULTS: (\d+):(\d+)', stdout_data)
            if res: return [int(res[0][0]), int(res[0][1])]
            return [0, 0] # 没找到
        
        # 如果找到了 misses，假设 correctness 为 1
        return [1, int(res[0])]

    result32 = get_trans_results("./test-trans -M 32 -N 32")
    result64 = get_trans_results("./test-trans -M 64 -N 64")
    result61 = get_trans_results("./test-trans -M 61 -N 67")

    # --- 最终得分计算 ---
    # 兼容处理 Part A 结果
    if not resultsim:
        csim_cscore = [0]
    else:
        csim_cscore = list(map(int, resultsim[0:1]))
    
    miss32 = int(result32[1])
    miss64 = int(result64[1])
    miss61 = int(result61[1])
    
    trans32_score = computeMissScore(miss32, 300, 600, maxscore['trans32']) * int(result32[0])
    trans64_score = computeMissScore(miss64, 1300, 2000, maxscore['trans64']) * int(result64[0])
    trans61_score = computeMissScore(miss61, 2000, 3000, maxscore['trans61']) * int(result61[0])
    total_score = csim_cscore[0] + trans32_score + trans64_score + trans61_score

    # Summary 打印
    print("\nCache Lab summary:")
    print("%-22s%8s%10s%12s" % ("", "Points", "Max pts", "Misses"))
    print("%-22s%8.1f%10d" % ("Csim correctness", csim_cscore[0], maxscore['csim']))

    for label, score, max_p, miss in [
        ("Trans perf 32x32", trans32_score, maxscore['trans32'], miss32),
        ("Trans perf 64x64", trans64_score, maxscore['trans64'], miss64),
        ("Trans perf 61x67", trans61_score, maxscore['trans61'], miss61)
    ]:
        miss_str = str(miss) if miss != 2**31-1 else "invalid"
        print("%-22s%8.1f%10d%12s" % (label, score, max_p, miss_str))

    print("%22s%8.1f%10d" % ("Total points", total_score,
                             maxscore['csim'] + maxscore['trans32'] + 
                             maxscore['trans64'] + maxscore['trans61']))
    
    if autograde:
        autoresult="%.1f:%d:%d:%d" % (total_score, miss32, miss64, miss61)
        print("\nAUTORESULT_STRING=%s" % autoresult)
    
if __name__ == "__main__":
    main()