class Solution {
public:
    int maxIceCream(vector<int>& nums, int coins) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
            if ((coins -= nums[i]) < 0)
                return i;
        return nums.size();
    }
};