class Solution {
public:
    int totalFruit(vector<int>& tree) {
        int K = 2;
        unordered_map<int, int> map;
        int left=0, right=0;
        int len = tree.size();
        int maxlen = INT_MIN;
        while(right<len){
            map[tree[right]]++;
            if(map.size()<=K){
                maxlen = max(maxlen, right - left + 1);
            }else{
                while(map.size() > K){
                    map[tree[left]]--;
                    if(map[tree[left]] == 0){
                        map.erase(tree[left]);
                    }
                    left++;
                }
            }
            right++;
        }
        return maxlen == INT_MIN ? 0 : maxlen;
    }
};
// 包含两个不同整数的最长子数组长度
// What is the length of longest subarray that contains up to two distinct integers?