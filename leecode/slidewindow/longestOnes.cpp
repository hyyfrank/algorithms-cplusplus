class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right;
        for (right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) k--;
            if (k < 0 && nums[left++] == 0){
                k++;
            }
        }
        return right - left;
    }
};

//1004: 给定一个由若干 0 和 1 组成的数组 A，我们最多可以将 K 个值从 0 变成 1 。

// 返回仅包含 1 的最长（连续）子数组的长度。

// 输入：A = [1,1,1,0,0,0,1,1,1,1,0], K = 2
// 输出：6
// 解释： 
// [1,1,1,0,0,1,1,1,1,1,1]
// 粗体数字从 0 翻转到 1，最长的子数组长度为 6。
