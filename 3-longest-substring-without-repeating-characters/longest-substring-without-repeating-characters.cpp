class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int maxCount = 0;
        unordered_map<char, int> hp;
        int start = 0;

        for (int i = 0; i < s.length(); i++) {
            if (hp.find(s[i]) != hp.end() && hp[s[i]] >= start) {
                start = hp[s[i]] + 1;
                count = i - start;
            }
            count++;
            hp[s[i]] = i;
            maxCount = max(count, maxCount);
        }

        return maxCount;
    }
};
