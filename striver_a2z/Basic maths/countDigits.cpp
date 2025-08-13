
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int ans = 0;
        int val = n;
        while(n>0){
            int digit = n% 10;
            n/=10;
        
            if (digit != 0 && val % digit == 0) {
                ans++;
            }
        }
        return ans;
    }
};