class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string n = s;
        reverse(n.begin(), n.end());
        
        return n==s;
    }
};