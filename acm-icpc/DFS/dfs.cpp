//
// Created by Huang Yanyi on 2019-04-14.
//

#include "dfs.h"
#include <iostream>

int a[4] = {1,2,4,7};
// 计算数组中是否可以选出若干数，求和等于k. 比如：13=2+4+7;问题的转化和抽象是关键
int n = 4 ,k = 13; // n是树的高度，等于a的长度，k是目标值

bool dfs(int i,int sum){
    if(i==n){
        std::cout<<"n="<<n<<";sum="<<sum<<std::endl;
        return sum == k;
    }
    if(dfs(i+1,sum)) return true;
    if(dfs(i+1,sum+a[i])) return true;
    return false;
}