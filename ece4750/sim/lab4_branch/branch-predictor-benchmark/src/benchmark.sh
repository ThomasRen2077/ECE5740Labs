#!/bin/bash


Benchmark=(164.gzip 175.vpr 176.gcc 181.mcf 186.crafty)
PHT=(16 32 64 128 256 512 1024)
DESIGN=(BranchBimodal BranchGlobal S)


for P in ${PHT[@]}; do
    for D in ${DESIGN[@]}; do
        total_accuracy=0.0
        for B in ${Benchmark[@]}; do
            make ../traces/$B/${B:4}.trace.bz2.sim PHT=$P DESIGN=$D
            output=$(make ../traces/$B/${B:4}.trace.bz2.sim PHT=$P DESIGN=$D)
            accuracy_rate=$(echo "$output" | grep -o -E '(^|[^0-9])0\.[0-9]+')
            total_accuracy=$(echo "$total_accuracy + $accuracy_rate" | bc)
            #echo "Current accuracy_rate is $accuracy_rate, current total accuracy is $total_accuracy" >> result.txt
        done
        num_benchmark=5
        average_rate=$(echo "scale=3; $total_accuracy / $num_benchmark" | bc)
        echo "The average accuracy rate for design $D with PHT_size $P is $average_rate" >> result.txt

    done
done