class Solution {
public:
    bool isVowel(char ch) {
        return ( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
    }
    int maxVowels(string s, int k) {
        int ans=0,tmp=0,n=s.size();
        for(int i=0;i<n;i++) {
            if(isVowel(s[i])) {
                tmp++;
            }
            if( i>=k ) {
                if(isVowel(s[i-k])) {
                    tmp--;
                }
            }
            ans = max(tmp,ans);
        }
        return ans;
    }
};