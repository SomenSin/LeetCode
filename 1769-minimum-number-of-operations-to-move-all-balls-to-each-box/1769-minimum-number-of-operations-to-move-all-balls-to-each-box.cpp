class Solution {
public:
    vector<int> minOperations(string b) {
        int n=b.size();
        vector<int> v(n,0);
        for(int i=0;i<n;i++)
        {
            int total=0;
            for(int j=0;j<n;j++)
            {
                if(b[j]=='1') {
                    total +=abs(i-j);
                }
            }
            v[i]=total;
        }
        return v;
    }
};