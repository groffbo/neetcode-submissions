#include <cmath>

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int L = 0; 
        int R = heights.size() - 1;
        int ret = 0;

        while(L < R) {
            ret = std::max(ret, (std::min(heights[L], heights[R]) * (R - L)));
            if (heights[L] >= heights[R]) {
                R--;
            } else {
                L++;
            }

        }

        return ret;
    }
};
