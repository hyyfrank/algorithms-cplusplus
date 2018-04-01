//
// Created by mac on 2018/4/1.
//

#include "fibonacci.h"
#include <iostream>
using namespace std;

int memo[100];

int fibonacci(int n) {
    if(n<=1){
        return n;
    }
    if(memo[n] != 0) {
        cout << "already calc in array:" << memo[n] << endl;
        return memo[n];
    }
    return memo[n] = fibonacci(n-1) + fibonacci(n-2);
}

void log(int n){
    for (int i = 0; i < n; ++i) {
        cout << memo[i] << endl;
    }
}