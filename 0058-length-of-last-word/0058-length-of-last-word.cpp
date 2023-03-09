class Solution {
public:
    int lengthOfLastWord(string s) {
        istringstream ss(s);
        string w="";
        while(ss>>w)
        {
            continue;
        }
        return w.size();
    }
};