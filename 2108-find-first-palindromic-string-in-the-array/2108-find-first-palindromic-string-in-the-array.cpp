class Solution {
public:
    bool pal(string s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!=s[n-i-1]) {
                return false;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words) {
            if(pal(i)) {
                return i;
            }
        }
        return "";
    }
};