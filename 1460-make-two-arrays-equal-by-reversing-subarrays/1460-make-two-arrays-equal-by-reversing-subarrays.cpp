class Solution {
public:
    bool canBeEqual(vector<int>& t, vector<int>& a) {
        vector<int> v(1001,0);
        for(int i=0;i<t.size();i++)
        {
            v[t[i]]++;
        }
        for(int i=0;i<a.size();i++)
        {
            v[a[i]]--;
        }
        int c= count(v.begin(),v.end(),0)-1;
        cout<<c;
        return c==1000?true:false;

    }
};