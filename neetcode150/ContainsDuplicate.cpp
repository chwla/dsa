class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> u;
        for(int i = 0; i<nums.size(); i++){
            if(u.find(nums[i]) != u.end()){
                return true;
            }
            u.insert(nums[i]);
        }
        return false;
    }
};