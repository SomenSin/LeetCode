class Solution {
public:
    string simplifyPath(string p) {
        stack<string> st;
        string ans="";
        int n=p.size();
        for(int i=0;i<n;i++) {
            string tmp="";
            if(p[i]=='/') {
                continue;
            }
            while(i<n && p[i]!='/') {
                tmp += p[i];
                i++;
            }
            if(tmp==".") {
                continue;
            }
            else if(tmp=="..") {
                if(!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(tmp);
            }
        }
        while(!st.empty()) {
            ans = "/"+ st.top()+ans;
            st.pop();
        }
        if(ans.size()==0) {
            return "/";
        }
        return ans;
    }
};