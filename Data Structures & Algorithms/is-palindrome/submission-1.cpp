class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = size(s) - 1;

        for(int i = 0; i < size(s); i++) {

            if(!isalnum(s[left])) {
                left++;
                continue;
            }

            if(!isalnum(s[right])) {
                right--;
                continue;
            }

            if(tolower(s[left]) != tolower(s[right])) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
