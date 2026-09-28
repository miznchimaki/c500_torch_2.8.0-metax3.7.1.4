#!/usr/bin/env bash
# 一键还原被切片的大文件
echo '正在还原 lib/libtorch_cpu.so...'
cat "lib/libtorch_cpu.so.part"* > "lib/libtorch_cpu.so"
echo '正在还原 lib/libtorch_cuda.so...'
cat "lib/libtorch_cuda.so.part"* > "lib/libtorch_cuda.so"
echo '全部大文件还原完成！'
