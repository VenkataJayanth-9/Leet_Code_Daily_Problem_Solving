class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size(), n = p.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
        return helper(0, 0, s, p, dp);
    }

private:
    bool helper(int i, int j, string &s, string &p, vector<vector<int>> &dp) {
        if (j == p.size()) return i == s.size(); // Pattern consumed, check if s is also done
        if (dp[i][j] != -1) return dp[i][j]; // Memoization

        bool first_match = (i < s.size() && (s[i] == p[j] || p[j] == '.'));

        if (j + 1 < p.size() && p[j + 1] == '*') { // Handle '*' wildcard
            dp[i][j] = helper(i, j + 2, s, p, dp) || // '*' acts as zero occurrences
                       (first_match && helper(i + 1, j, s, p, dp)); // '*' repeats
        } else {
            dp[i][j] = first_match && helper(i + 1, j + 1, s, p, dp);
        }

        return dp[i][j];
    }
};
