class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0;
        int len = nums.size();
        int res = INT_MAX;
        int sum = 0;
        while(right<len){
            sum+=nums[right];
            while(sum >= target) { //注意这里是个while
                res = min(res, right -left+1);
                sum -= nums[left];
                left++;
            }
            right++;
        }
        return res == INT_MAX? 0 : res;

    }
};
// 输入：target = 7, nums = [2,3,1,2,4,3]
// 输出：2
// 解释：子数组 [4,3] 是该条件下的长度最小的子数组。