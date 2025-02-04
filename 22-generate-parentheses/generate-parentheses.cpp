class Solution {
public:
    
    void generate(int open, int close, string current, vector<string>& result, int n) {
        if (current.length() == 2 * n) {
            result.push_back(current);
            return;
        }
        if (open < n) generate(open + 1, close, current + "(", result, n);
        if (close < open) generate(open, close + 1, current + ")", result, n);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        generate(0, 0, "", result, n);
        return result;
    }
};