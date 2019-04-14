//
// Created by Huang Yanyi on 2019-04-14.
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
            if(nums[first]<=target && target < nums[mid]){// 注意边界=
                last = mid;
            }else {
                first = mid +1;
            }
        } else {
            if (nums[mid] < target && target <= nums[last-1]) { //边界=，还要注意这里的last是整个的长度，必须减一，不然超出大小会报错
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
// 再来一个，如果里边允许重复元素，那么，上面判断是否为递增数组的条件就不符合了

int rsearch2(vector<int>& nums, int target){
    int first = 0;
    int last = nums.size();
    while(first != last) {
        int mid = first + (last-first)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[first] < nums[mid]){
            //
            if(nums[first]<=target && target < nums[mid]){// 注意边界=
                last = mid;
            }else {
                first = mid +1;
            }
        } else if(nums[first] > nums[mid]) {
            if (nums[mid] < target && target <= nums[last-1]) { //边界=，还要注意这里的last是整个的长度，必须减一，不然超出大小会报错
                first = mid + 1;
            } else {
                last = mid;
            }
        } else {
            //忽略重复元素
            first++;
        }
    }
    return -1;
}