class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int ans=nums[0] + nums[1] + nums[2];
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j=i+1, k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>target)k--;
                else if(sum<target)j++;
                if (sum == target) return sum;
                if(abs(ans-target)>= abs(sum-target)) ans=sum;
            }
        }
        return ans;
    }
};