class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum_counts;
        prefix_sum_counts[0] = 1; 
        int current_sum = 0;
        int count = 0;
        
        for (int num : nums) {
            current_sum += num;
            if (prefix_sum_counts.find(current_sum - k) != prefix_sum_counts.end()) {
                count += prefix_sum_counts[current_sum - k];
            }
            prefix_sum_counts[current_sum]++;
        }
    
        return count;
    }
};