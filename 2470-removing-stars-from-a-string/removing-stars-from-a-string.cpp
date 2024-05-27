class Solution {
public:
    string removeStars(string s) {
        string ans="";
        stack<char> st;
        for(auto i:s) {
            char ch = i;
            if(ch=='*') {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;
    }
};