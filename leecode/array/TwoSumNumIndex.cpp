//
// Created by mac on 2018/4/9.
//

#include "TwoSumNumIndex.h"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
vector<int> twoSumIndex(vector<int> &nums, int target) {
    unordered_map<int, int> mapping;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        mapping[nums[i]] = i;
    }
    for (int i = 0; i < nums.size(); i++) {
        const int gap = target - nums[i];
        if (mapping.find(gap) != mapping.end() && mapping[gap] > i) {
            result.push_back(i + 1);
            result.push_back(mapping[gap] + 1);
            break;
        } }
    return result;
}