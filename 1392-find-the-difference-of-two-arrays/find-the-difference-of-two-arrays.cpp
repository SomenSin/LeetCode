class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> mp1,mp2;
        vector<vector<int>> ans;
        vector<int> tmp1,tmp2;
        for(auto i:nums1) {
            mp1[i] = true;
        }
        for(auto i:nums2) {
            if(mp1[i]) {
                mp1[i] = false;
            }
            mp2[i] = true;
        }
        for(auto i:nums1) {
            if(mp2[i]) {
                mp2[i] = false;
            }
        }
        for (auto i = mp1.begin(); i != mp1.end(); i++) {
            if(i->second) {
                tmp1.push_back(i->first);
            }
        }
        ans.push_back(tmp1);

         for (auto i = mp2.begin(); i != mp2.end(); i++) {
            if(i->second) {
                tmp2.push_back(i->first);
            }
        }
        ans.push_back(tmp2);

        return ans;
    }
};