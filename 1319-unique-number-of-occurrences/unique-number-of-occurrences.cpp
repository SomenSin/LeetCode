class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp1;
        unordered_map<int,bool> mp2;
        for(auto i:arr) {
            mp1[i]++;
        }
        for(auto i:mp1) {
            if( mp2[i.second] == false ) {
                mp2[i.second] = true;
            } 
            else {
                return false;
            }
        }
        return true;
    }
};