#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prec(char c) {
        if (c == '^')
            return 3;
        else if (c == '/' || c == '*')
            return 2;
        else if (c == '+' || c == '-')
            return 1;
        else
            return -1;
    }

    string infixToPostfix(string s) {
        stack<char> st;
        string res;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            if (isalnum(c)) {
                res += c;
            }
            else if (c == '(') {
                st.push(c);
            }
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
            }
            else {
                while (!st.empty() && prec(c) <= prec(st.top())) {
                    res += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        return res;
    }
};