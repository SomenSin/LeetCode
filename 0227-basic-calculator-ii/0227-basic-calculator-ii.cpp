class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        istringstream ss(s);
        int n=0,ans=0;
        char ch='+';
        while(ss>>n)
        {
            int x=0;
            if(ch=='+' || ch=='-') {
                x= ch=='+'?n:-n;
                st.push(x);
            }
            else {
                x = st.top();
                st.pop();
                ch=='*'?x *= n:x /=n;
                st.push(x);
            }
            ss>>ch;
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};