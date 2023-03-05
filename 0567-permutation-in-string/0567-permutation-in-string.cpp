class Solution {
public:
    bool checkeqe(vector<int> v1,vector<int> v2) {
        for(int i=0;i<26;i++) 
        {
            if(v1[i]!=v2[i]) {
                return false;
            }
        }
        return true;
    }
   
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        //freq array of s1
        for(auto c:s1)
        {
            v1[c-'a']++;
        }
        int i=0,ws=s1.length(),m=s2.length();
        vector<int> v2(26,0);
        //freq array of s2
        //first input in s2 freq array
        while(i<ws && i<s2.length() )
        {
            v2[s2[i]-'a']++;
            i++;
        }
        //check if eual
        if(checkeqe(v1,v2)) {
            return true;
        }
        //adding new character and erasing old one in s2 freq array in size of wc 
        while(i<s2.length())
        {
            v2[s2[i]-'a']++;
            v2[s2[i-ws]-'a']--;
            if(checkeqe(v1,v2)) {
                return true;
            }
            i++;
        }
        
        return false;
    }
};