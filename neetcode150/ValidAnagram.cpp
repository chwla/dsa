class Solution {
public:
    bool isAnagram(string s, string t) {
        multiset<char> s1(s.begin(), s.end());
        multiset<char> s2(t.begin(), t.end());
        return s1 == s2;
    }
};