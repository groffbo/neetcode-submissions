class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = size(s) - 1;

        for(int i = 0; i < size(s); i++) {
            s[left] = tolower(s[left]);
            s[right] = tolower(s[right]);

            if(!isalnum(s[left])) {
                left++;
                continue;
            }

            if(!isalnum(s[right])) {
                right--;
                continue;
            }

            if(s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
