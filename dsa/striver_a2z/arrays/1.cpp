class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
        vector<int> ans;
        for(int i = 0; i<nums.size();i++){
            int val = target-nums[i];
            if(um.find(val) != um.end())return{um[val], i};
            else um[nums[i]] = i;
        }
        return ans;
    }
};