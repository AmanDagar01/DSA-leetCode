class Solution {
public:
    bool isPalindrome(string s) {
        string clean_s;
        for (char c : s) {
            if (isalnum(c)) {
                clean_s += tolower(c);
            }
        }

        for (int i = 0; i < clean_s.size() / 2; i++) {
            if (clean_s[i] != clean_s[clean_s.size() - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};