class Solution {
public:
    vector<int> partitionLabels(string s) {
        int s1=s.size();
        vector<int> v;
        int t=0;
        for(int i=0;i<s1;i++)
        {
            
            int n = s.find_last_of(s[i]);
            while(i<n) {
                i++;
                int x = s.find_last_of(s[i]);
                n = max(n,x);
            }
            v.push_back(abs(t-n)+1);
            t=n+1;
        }
        return v;
    }
};