class Solution {
public:
    int compress(vector<char>& chars) {
       int i=0,res=0;
       while( i < chars.size() ) {
            int grpSize = 1;
            while(i+grpSize < chars.size() && chars[i+grpSize] == chars[i]) {
                grpSize++;
            }
            chars[res++] = chars[i];
            if(grpSize>1) {
                string num = to_string(grpSize);
                for(auto ch:num) {
                    chars[res++] = ch;
                }
            }
            i += grpSize;
       }
       return res;
    }
};