class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = -1, count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==num){
                count++;
            }
            else if(count==0)num = nums[i];
            else count--;
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num)count++;
        }
        if(count>(n/2))return num;
        return num;
    }
};