class Solution {
public:
    bool isPalindrome(string s) {
        int b=0,e=s.size()-1;
        while(b<e)
        {
            if( !iswalnum(s[b]) ) {
                b++;
            }
            else if( !iswalnum(s[e]) ) {
                e--;
            }
            else {
                if( tolower(s[b]) != tolower(s[e]) ) {
                    return false;
                }
                b++;
                e--;
            }
        }

        return true;
    }
};