class Solution {
public:

    vector<int> genrow(int n){
        vector<int>ans;
        long long temp = 1;
        ans.push_back(temp);
        for(int i = 1; i<n; i++){
            temp = temp*(n-i);
            temp = temp/i;
            ans.push_back(temp);
        }
        return ans;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>fin_ans;
        for(int i =1;i<=numRows; i++){
            fin_ans.push_back(genrow(i));
        }
        return fin_ans;
    }
};