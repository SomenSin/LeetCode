class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int f = s.find('6');
        if(f<s.size()) {
            s[f]='9';
        }
        else {
            return num;
        }
        int ans = stoi(s);
        return ans;

    }
};