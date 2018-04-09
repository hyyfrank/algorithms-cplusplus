//
// Created by mac on 2018/4/9.
//

#include "rotatedArray.h"
#include <iostream>
#include "vector"

using namespace std;
//迭代式算法
int rsearch(vector<int>& nums, int target){
    int first = 0;
    int last = nums.size();
    while(first != last) {
        int mid = first + (last-first)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[first] < nums[mid]){
            //
            if(nums[first]<=target && target < nums[mid]){
                last = mid;
            }else {
                first = mid +1;
            }
        } else {
            if (nums[mid] < target && target <= nums[last-1]) {
                first = mid + 1;
            } else {
                last = mid;
            }
        }
    }
    return -1;
}
// 递归算法如下
int hyysearch(vector<int>& nums, int start, int end, int target){
    if(start>end) return -1;
    int mid = start + (end -start) / 2;
    if(nums[mid] == target) {return mid;}
    if(nums[mid]< nums[end]){
        //right array sorted.
        if(nums[mid]< target && target < nums[end]){
            return hyysearch(nums,mid+1,end,target);
        } else {
            return hyysearch(nums,start,mid,target);
        }
    } else {
        if(nums[start] < target && target < nums[end]){
            return hyysearch(nums,start,mid,target);
        } else {
            return hyysearch(nums,mid+1,end,target);
        }
    }
}
