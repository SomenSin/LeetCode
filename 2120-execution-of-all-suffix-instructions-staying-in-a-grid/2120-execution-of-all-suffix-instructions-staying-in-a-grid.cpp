class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& sp, string s) {
        int n1=s.length();
        vector<int> ans;
        int r=sp[0],c=sp[1];
        for(int i=0;i<n1;i++)
        {
            int t=0;
            for(int j=i;j<n1;j++)
            {
                if(s[j]=='L') {
                    --c;
                    if(c<n && c>=0) {
                        t++;
                    }
                    else {
                        break;
                    }
                }
                else if(s[j]=='U') {
                    --r;
                    if(r<n && r>=0) {
                        t++;
                    }
                    else {
                        break;
                    }
                }
                else if(s[j]=='R') {
                    c++;
                    if(c<n && c>=0) {
                        t++;
                    }
                    else {
                        break;
                    }
                }
                else {
                    r++;
                    if(r<n && r>=0) {
                        t++;
                    }
                    else {
                        break;
                    }
                }
            }
            ans.push_back(t);
            r=sp[0];
            c=sp[1];
        }
        return ans;
    }
};