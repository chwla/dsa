class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ra(nums.size());
        int a = 0;
        int b = 1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0){
                ra[a] = nums[i];
                a = a+2;
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0){
                ra[b] = nums[i];
                b = b+2;
            }
        }
        return ra;
    }
};