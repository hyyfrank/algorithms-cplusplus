//
// Created by Huang Yanyi on 2019-04-14.
//

#include "fibnacci.h"
#include <iostream>
using namespace std;

double memo[100];
// memoization O(n)+O(n)
double fibonacci(int n) {
    if(n<=1){
        return n;
    }
    if(memo[n] != 0) {
        return memo[n];
    }
    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

void log1(int n){
    cout << "start log result:"  <<endl;
    for (int i = 0; i < n; i++) {
        cout << "fib "<< i+1 << " is: " << fibonacci(i) << endl;
    }
}

//迭代优化O(n)+O(1)
double fibnacciOptimation(int n){
    double f = 0;
    double g = 1;
    while (0<n--){
        g=g+f;
        f=g-f;
    }
    return g;
}

void log2(int n){
    cout << "start log result:"  <<endl;
    for (int i = 0; i < n; i++) {
        cout << "fib "<< i+1 << " is: " << fibnacciOptimation(i) << endl;
    }
}



