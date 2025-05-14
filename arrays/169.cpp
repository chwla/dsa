class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin() , nums.end());

        int count=1, maxcount=1;
        int maxelement = nums[0];
        for(int i=1;i<n;i++){

            if(nums[i]==nums[i-1])count++;
            else count=1;
            if(maxcount<count){
                maxcount=count;
                   maxelement=nums[i];
                }
            if(maxcount>n/2){
                return maxelement;
            }

        }
        return maxelement;
    }
};