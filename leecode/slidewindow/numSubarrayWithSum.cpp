
// 给你一个二元数组 nums ，和一个整数 goal ，请你统计并返回有多少个和为 goal 的 非空 子数组。

// 子数组 是数组的一段连续部分。
// 输入：nums = [1,0,1,0,1], goal = 2
// 输出：4
// 解释：
// 有 4 个满足题目要求的子数组：[1,0,1]、[1,0,1,0]、[0,1,0,1]、[1,0,1]

class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return atMost(nums,goal)-atMost(nums,goal-1); // goal其实理解为goal个1，至多goal个1减去至多goal-1个1的数目就是刚好等于goal的数目
    }
    int atMost(vector<int>& nums, int target) {
        if (target < 0) return 0;
        int res = 0, i = 0, n = nums.size();
        for (int j = 0; j < n; j++) {
            target -= nums[j];
            while (target < 0)
                target += nums[i++];
            res += j - i + 1;
        }
        return res;
    }
};