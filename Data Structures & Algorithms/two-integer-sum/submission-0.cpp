#include <unordered_set>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_set<int> hash;
        vector<int> arr;

        for (int i = 0; i < size(nums); i++) {
            int difference = target - nums[i];
            if(hash.find(difference) != hash.end()) {
                auto index = find(nums.begin(), nums.end(), difference);
                arr.push_back(index - nums.begin());
                arr.push_back(i);
                return arr;
            }
            else {
                hash.insert(nums[i]);
            }
        }

    }
};
