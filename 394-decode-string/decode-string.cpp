class Solution {
public:
    string decodeString(string s) {
        int mul = 0;
        string cur = "";
        stack<int> num;
        stack<string> st;

        for(char i:s) {
            if(isdigit(i)) {
                mul = mul*10 + (i-'0');
            }
            else if(isalpha(i)) {
                cur += i;
            }
            if(i == '[') {
                num.push(mul);
                mul = 0;
                st.push(cur);
                cur = "";
            }
            if(i == ']') {
                int repeat = num.top();
                num.pop();
                string tmp = cur;
                while(--repeat) {
                    cur += tmp;
                }
                if(!st.empty()) {
                    cur = st.top() + cur;
                    st.pop();
                }
            }
        }

        return cur;
    }
};