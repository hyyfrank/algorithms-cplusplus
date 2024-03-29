class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostDistinctK(nums,k)-atMostDistinctK(nums,k-1);
    }
    int atMostDistinctK(vector<int>& nums, int K) {
        int left = 0, res = 0;
        unordered_map<int, int> map;
        for (int right = 0; right < nums.size(); right++) {
            map[nums[right]]++;
            while(map.size()>K){
                map[nums[left]]--;
                if(map[nums[left]]==0){
                    map.erase(nums[left]);
                }
                left++;
            }
            res += right - left + 1;
        }
        return res;
    }
};

// 给定一个正整数数组 A，如果 A 的某个子数组中不同整数的个数恰好为 K，则称 A 的这个连续、不一定不同的子数组为好子数组。
// （例如，[1,2,3,1,2] 中有 3 个不同的整数：1，2，以及 3。）
// 返回 A 中好子数组的数目。

// 输入：A = [1,2,1,2,3], K = 2
// 输出：7
// 解释：恰好由 2 个不同整数组成的子数组：[1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2].

// https://leetcode-cn.com/problems/subarrays-with-k-different-integers/