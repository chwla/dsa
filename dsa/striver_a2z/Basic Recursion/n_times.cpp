
class Solution {
  public:
    void printGfg(int n) {
        // Code here
        if(n<=0)return;
        printGfg(n-1);
        cout<<"GFG"<<" ";
    }
};