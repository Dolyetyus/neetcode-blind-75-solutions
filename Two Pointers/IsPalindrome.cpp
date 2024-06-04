class Solution {
public:
    bool isPalindrome(string s) {
        string modified;
        for (char c: s) {
            if (c != ' ' && isalnum(c)) modified += tolower(c);
        }

        for (int i = 0; i < modified.size() / 2; i++) {
            if (modified[i] != modified[modified.size() - i - 1]) return false;
        }
        return true;
    }
};
