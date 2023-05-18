class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++) {
            int rem = t-nums[i];
            if(mp.find(rem) != mp.end()) {
                return {i,mp[rem]};
            }
            else {
                mp[nums[i]] = i;
            }
            
        }
        return {-1,-1};
    }
};