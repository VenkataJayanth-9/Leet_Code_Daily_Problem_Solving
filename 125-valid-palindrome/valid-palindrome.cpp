#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, end = s.length() - 1;

        while (i < end) {
            while (i < end && !isalnum(s[i])) i++;    // Skip non-alphanumeric characters
            while (i < end && !isalnum(s[end])) end--; // Skip non-alphanumeric characters

            if (tolower(s[i]) != tolower(s[end])) {
                return false;
            }
            i++;
            end--;
        }
        return true;
    }
};
