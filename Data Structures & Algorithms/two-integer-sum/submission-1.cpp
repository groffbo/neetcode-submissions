class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> options;
        
        for(int i = 0; i < nums.size(); i++) {
            int candidate = target - nums[i];
            if(options.contains(candidate)) {
                return {options[candidate], i};
            } else {
                options[nums[i]] = i;
            }
        }
        return {};
    }
};
