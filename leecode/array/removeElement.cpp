//
// Created by mac on 2018/4/11.
//

#include "removeElement.h"

#include <vector>
#include <iostream>
int removeHyyElement(vector<int>& nums, int target){
    int index = 0;
    for(int i = 0;i<nums.size();++i){
        if(nums[i] != target){
            nums[index++] = nums[i];
        }
    }
    for(auto j : nums){
        cout << j << "-";
    }
    cout<<endl;
    return index;
}