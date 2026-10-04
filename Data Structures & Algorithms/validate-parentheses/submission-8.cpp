#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        pair<char, char> curly = {'{', '}'};
        pair<char, char> bracket = {'[', ']'};
        pair<char, char> curve = {'(', ')'};

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == bracket.first or s[i] == curve.first or s[i] == curly.first) {
                st.push(s[i]);
            } else { //this means its a closing parenthesis
                if(st.empty()) 
                    return false;
                char top = st.top();
                if (s[i] == curly.second) {
                    //we check if top is the matching
                    if (top == curly.first)
                        st.pop();
                    else {
                        return false;
                    }
                } else if (s[i] == bracket.second) {
                    if (top == bracket.first)
                        st.pop();
                    else {
                        return false;
                    }
                } else {
                    if (top == curve.first)
                        st.pop();
                    else {
                        return false;
                    }
                }
            }
        }

        if (st.empty()) {
            return true;
        }
            return false;
    }
};
