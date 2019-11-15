cmake_minimum_required(VERSION 3.13)
project(algorithms)

set(CMAKE_CXX_STANDARD 11)

add_executable(
        algorithms
        main.cpp
        acm-icpc/quicksort/quicksort.cpp
        acm-icpc/quicksort/quicksort.h
        acm-icpc/DFS/dfs.cpp
        acm-icpc/DFS/dfs.h
        acm-icpc/DFS2/dfs2.cpp
        acm-icpc/DFS2/dfs2.h
        acm-icpc/fibnacci/fibnacci.cpp
        acm-icpc/fibnacci/fibnacci.h
        leecodes/array/duplicate.cpp
        leecodes/array/duplicate.h
        leecodes/array/findMediaSort.cpp
        leecodes/array/findMediaSort.h
        leecodes/array/myPow.cpp
        leecodes/array/myPow.h
        leecodes/array/mySqrt.cpp
        leecodes/array/mySqrt.h
        leecodes/array/removeElement.cpp
        leecodes/array/removeElement.h
        leecodes/array/rotatedArray.cpp
        leecodes/array/rotatedArray.h
        leecodes/array/sumoftwointeger.cpp
        leecodes/array/sumoftwointeger.h
        leecodes/array/ThreeSum.cpp
        leecodes/array/ThreeSum.h
        leecodes/array/TwoSumNumberIndex.cpp
        leecodes/array/TwoSumNumberIndex.h
        leecodes/backtrace/permute.cpp
        leecodes/backtrace/permute.h
        leecodes/backtrace/sublist.cpp leecodes/backtrace/sublist.h)