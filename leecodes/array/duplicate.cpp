//
// Created by Huang Yanyi on 2019-04-14.
//

#include "duplicate.h"
#include <iostream>
//简单去重
int removeDuplicate(vector<int>& nums){
    if (nums.empty()) return 0;
    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[index] != nums[i])
            nums[++index] = nums[i];
    }
    for (int j = 0; j < index+1; ++j) {
        if(j!=index){
            cout<<nums[j]<<"-";
        }else{
            cout<<nums[j];
        }
    }
    cout<<endl;
    return index + 1;
}
//允许两个连续的相同
int removeDuplicates2(vector<int>& nums) {
    const int n = nums.size();
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && i < n - 1 && nums[i] == nums[i - 1] && nums[i] == nums[i + 1])
            continue;
        nums[index++] = nums[i];
    }
    for (int j = 0; j < index; ++j) {
        if(j!=index-1){
            cout<<nums[j]<<"-";
        }else{
            cout<<nums[j];
        }
    }
    cout<<endl;
    return index;
}
//简单去重
int removeDuplicates3(vector<int>& nums) {
    const int n = nums.size();
    int index = 0;
    for (int i = 0; i < n; ++i) {
        if (i > 0 && i < n && nums[i] == nums[i - 1] )
            continue;
        nums[index++] = nums[i];
    }
    for (int j = 0; j < index; ++j) {
        if(j!=index-1){
            cout<<nums[j]<<"-";
        }else{
            cout<<nums[j];
        }
    }
    cout<<endl;
    return index;
}
