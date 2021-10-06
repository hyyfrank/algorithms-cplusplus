 
// Intuition
// Sort the input array A
// Sliding window prolem actually,
// the key is to find out the valid condition:
// k + sum >= size * max
// which is
// k + sum >= (j - i + 1) * A[j]


// Explanation
// For every new element A[j] to the sliding window,
// Add it to the sum by sum += A[j].
// Check if it'a valid window by
// sum + k < (long)A[j] * (j - i + 1)

// If not, removing A[i] from the window by
// sum -= A[i] and i += 1.

// Then update the res by res = max(res, j - i + 1).

// I added solution 1 for clearly expain the process above.
// Don't forget to handle the overflow cases by using long.


// Complexity
// Time O(sort)
// Space O(sort)


int maxFrequency(vector<int>& nums, int k) {
        sort(begin(nums), end(nums));
        long i = 0, N = nums.size(), ans = 1, sum = 0;
        for (int j = 0; j < N; ++j) {
            sum += nums[j];
            while ((j - i + 1) * nums[j] - sum > k) sum -= nums[i++];
            ans = max(ans, j - i + 1);
        }
        return ans;

    }


// 元素的 频数 是该元素在一个数组中出现的次数。

// 给你一个整数数组 nums 和一个整数 k 。在一步操作中，你可以选择 nums 的一个下标，并将该下标对应元素的值增加 1 。

// 执行最多 k 次操作后，返回数组中最高频元素的 最大可能频数 。

//  

// 示例 1：

// 输入：nums = [1,2,4], k = 5
// 输出：3
// 解释：对第一个元素执行 3 次递增操作，对第二个元素执 2 次递增操作，此时 nums = [4,4,4] 。
// 4 是数组中最高频元素，频数是 3 。
// 示例 2：

// 输入：nums = [1,4,8,13], k = 5
// 输出：2
// 解释：存在多种最优解决方案：
// - 对第一个元素执行 3 次递增操作，此时 nums = [4,4,8,13] 。4 是数组中最高频元素，频数是 2 。
// - 对第二个元素执行 4 次递增操作，此时 nums = [1,8,8,13] 。8 是数组中最高频元素，频数是 2 。
// - 对第三个元素执行 5 次递增操作，此时 nums = [1,4,13,13] 。13 是数组中最高频元素，频数是 2 。
// 示例 3：

// 输入：nums = [3,9,6], k = 2
// 输出：1

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/frequency-of-the-most-frequent-element
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。