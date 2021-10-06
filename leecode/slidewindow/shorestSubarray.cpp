class Solution {
public:
// 这题也难的
    int shortestSubarray(vector<int>& nums, int K) {
        int N = nums.size(), res = N + 1;
        deque<int> d;
        for (int i = 0; i < N; i++) {
            if (i > 0)
                nums[i] += nums[i - 1];
            if (nums[i] >= K)
                res = min(res, i + 1);
            while (d.size() > 0 && nums[i] - nums[d.front()] >= K)
                res = min(res, i - d.front()), d.pop_front();
            while (d.size() > 0 && nums[i] <= nums[d.back()])
                d.pop_back();
            d.push_back(i);
        }
        return res <= N ? res : -1;
    }
}; 

// 返回 A 的最短的非空连续子数组的长度，该子数组的和至少为 K 。
// 如果没有和至少为 K 的非空子数组，返回 -1 。