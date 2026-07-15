#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashSet;

        for (int i = 0; i < size(nums); i++) {
            if (hashSet.find(nums[i]) != hashSet.end()) {
                return true;
            }

            hashSet.insert(nums[i]);
        }

        return false;
    }
};