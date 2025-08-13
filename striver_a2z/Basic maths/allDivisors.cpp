
class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
        vector<int> lastHalf;
        for(int i=1; i*i <= n; i++){
            if(n%i==0){
                cout<<i<<" ";
                if(n/i != i)
                lastHalf.push_back(n/i);
            }
        }
        for(int i=lastHalf.size()-1; i>=0; i--)
        cout<<lastHalf[i]<<" ";
    }
};