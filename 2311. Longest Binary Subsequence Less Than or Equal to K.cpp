class Solution {
public:
    int longestSubsequence(string s, int k) {
        int val = 0, ct = 0, pow = 1;
    for (int i = s.size() - 1; i >= 0 && val + pow <= k; --i) {
        if (s[i] == '1') {
            ct++;
            val += pow;
        }
        pow <<= 1;
    }
    return count(s.begin(), s.end(), '0') + ct;
    }
};