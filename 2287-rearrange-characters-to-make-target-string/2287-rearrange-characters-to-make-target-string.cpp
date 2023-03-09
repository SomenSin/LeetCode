class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        int c=0;
        vector<int> v(26,0);
        for(char i:s)
        {
            v[i-'a']++;
        }
        vector<int> v2(26,0);
        for(char i:t)
        {
            v2[i-'a']++;
        }
        while(1){
            bool f=0;
            for(int i=0;i<26;i++)
            {
                if(v[i] < v2[i]) {
                    f=1;
                    break;
                }
                v[i] -= v2[i];
            }
            if(f) {
                break;
            }
            c++;
        }
        return c;
    }
};