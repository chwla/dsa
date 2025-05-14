class Solution {
public:
bool isPalindrome(string s) {
        string f;
        for (char c : s) {
            if (isalnum(c)) {
                if (c >= 'A' && c <= 'Z') {
                    c = c + 32;
                }
                f += c;
            }
        }
        string reversed_f(f.rbegin(), f.rend());
        return f == reversed_f;
    }

};