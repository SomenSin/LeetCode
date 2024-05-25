class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int s1=word1.size(),s2=word2.size();
        vector<int> v1(27,0),v2(27,0);
        if(s1!=s2) {
            return false;
        }
        for(auto i:word1){
            v1[i-'a']++;
        }
        for(auto i:word2){
            v2[i-'a']++;
        }
         for(int i=0;i<27;i++) {
            if((v1[i]==0 && v2[i]) || (v1[i] && v2[i]==0) ) {
                return false;
            }
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<27;i++) {
            if(v1[i] != v2[i]) {
                return false;
            }
        }
        return true;
    }
};