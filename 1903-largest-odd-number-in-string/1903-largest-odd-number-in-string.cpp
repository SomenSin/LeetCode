class Solution {
public:
    string largestOddNumber(string ans) {
        int i=0,j=ans.length()-1;
        while(i<=j)
        {
            if((ans[j]-'0')%2 != 0) {
                return ans.substr(i,j+1);
            }
            else {
                --j;
            }
        }
        return "";
    }
};