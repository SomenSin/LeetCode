class Solution {
public:
    int countCharacters(vector<string>& w, string c) {
        unordered_map<char,int> mp;
        for(char i: c)
        {
            mp[i]++;
        }
        int count=0;
        for(string i:w)
        {
            bool flag=1;
            unordered_map<char,int> mp2;
            for(int j=0;j<i.length();j++)
            {
                if(++mp2[i[j]] > mp[i[j]]){
                    flag=0;
                    break;
                }
            }
            if(flag) {
                count += i.length();
            }
        }
        return count;
    }
};