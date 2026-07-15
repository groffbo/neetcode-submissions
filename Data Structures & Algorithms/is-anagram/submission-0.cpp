#include <unordered_set>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_arr[26] = {0};
        int t_arr[26] = {0};
        
        if (size(s) != size(t))
            return false;
        
        for (int i = 0; i < size(s); i++) {
            s_arr[s[i] - 'a']++;
            t_arr[t[i] - 'a']++;
        }

        for(int i = 0; i < 26; i++) {
            if(s_arr[i] != t_arr[i])
                return false;
        }

        return true;
    }
};
