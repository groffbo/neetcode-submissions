class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //window and hash map 
        int L = 0;
        std::unordered_set<char> seen;
        int ret = 0;

        for(int i = 0; i < s.size(); i++) {
            //if char is in the map...
            while(seen.contains(s[i])) {
                //this means that its currently in the window
                seen.erase(s[L]);
                L++;
            }
            seen.insert(s[i]);
            ret = max(ret, (i - L) + 1);
        }

        return ret;
    }
};
