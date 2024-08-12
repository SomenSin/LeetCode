class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> mp;
        for(auto i:strs) {      // O(n)
            string tmp = i;
            sort(tmp.begin(),tmp.end());    //O(logn)
            mp[tmp].push_back(i);
        }
        for(auto i:mp) {
            ans.push_back(i.second);
        }
        return ans;
    }
};