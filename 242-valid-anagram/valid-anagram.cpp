class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq1[26] = {0},freq2[26] = {0};
        for(char i:s) {
            freq1[i-'a']+= 1;
        }
        for(char i:t) {
            freq2[i-'a']+= 1;
        }
        for(int i = 0; i < 26; ++i) {
            if (freq1[i] != freq2[i]) {
                return false;
            }
        }
        return true;
    }
};