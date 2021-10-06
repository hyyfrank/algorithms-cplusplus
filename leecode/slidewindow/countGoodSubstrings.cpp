class Solution {
public:
    int countGoodSubstrings(string s) {

        vector<char> sc(s.begin(),s.end());
        int res = 0;
        if(sc.size()<3) return false;
        for(int i=2;i<sc.size();i++){
            if(sc[i-2]!=sc[i-1]&&sc[i-2]!=sc[i]&&sc[i-1]!=sc[i]){
                res++;
            }
        }
        return res;

    }
};

// 如果一个字符串不含有任何重复字符，我们称这个字符串为 好 字符串。
// 给你一个字符串 s ，请你返回 s 中长度为 3 的 好子字符串 的数量。
// 注意，如果相同的好子字符串出现多次，每一次都应该被记入答案之中。
// 子字符串 是一个字符串中连续的字符序列。
// 输入：s = "xyzzaz"
// 输出：1
// 解释：总共有 4 个长度为 3 的子字符串："xyz"，"yzz"，"zza" 和 "zaz" 。
// 唯一的长度为 3 的好子字符串是 "xyz"

// 链接：https://leetcode-cn.com/problems/substrings-of-size-three-with-distinct-characters
