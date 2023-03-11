class Solution {
public:
    string customSortString(string o, string s) {
        sort(s.begin(),s.end(),[&](auto& a,auto& b) {
           return o.find(a) < o.find(b);
        });
        return s;
    }
};