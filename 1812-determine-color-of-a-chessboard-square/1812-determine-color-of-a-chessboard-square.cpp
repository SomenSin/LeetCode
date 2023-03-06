class Solution {
public:
    bool squareIsWhite(string c) {
        int alpha = c[0]-'a';
        int num = c[1]-'1';
    
        if((alpha+num)%2==0) {
            return false;
        }
        return true;
    }
};