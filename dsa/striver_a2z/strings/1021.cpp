class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string c;
        for(char t:s){
            if(t=='(' && count++ > 0) c+=t;
            if(t==')' && count-->1) c+=t;
        }
        return c;
    }
};