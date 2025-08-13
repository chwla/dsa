class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        int max = INT_MIN;
        vector<int>leaders;
        for(int i=arr.size()-1; i>=0; i--){
            if(arr[i]>=max){
               max = arr[i];
               leaders.push_back(arr[i]);
            }
        }
        reverse(leaders.begin(), leaders.end());
        return leaders;
    }
};