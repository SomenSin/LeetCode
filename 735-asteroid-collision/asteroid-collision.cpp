class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        for(int a:ast) {
            if(a < 0) {
                while(!st.empty() && (st.top() > 0 && st.top() < -a) ) {
                    st.pop();
                }
                if(st.empty() || st.top() < 0) {
                    st.push(a);
                }
                if(!st.empty() && st.top() == -a) {
                    st.pop();
                }
            }
            else {
                st.push(a);
            }
        }
        int n = st.size()-1;
        vector<int> ans(n+1);
        while(!st.empty()) {
            ans[n--] = st.top();
            st.pop();
        }
        return ans;
    }
};