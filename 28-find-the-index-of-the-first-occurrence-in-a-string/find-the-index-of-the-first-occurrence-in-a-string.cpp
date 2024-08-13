class Solution {
public:
    int strStr(string hs, string n) {
        int s1=hs.size();
        for(int i=0;i<s1;i++) {
            int s2=n.size();
            if(s2>s1-i) {
                break;
            }
            string tmp = hs.substr(i,s2);
            if(tmp==n) {
                return i;
            }
        }
        return -1;
    }
};