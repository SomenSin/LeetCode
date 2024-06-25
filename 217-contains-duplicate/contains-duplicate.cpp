class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) {
            return false;
        }
        int f=0,s=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++) {
            if(nums[f++] == nums[s++]) {
                return true;
            }
        }
        return false;
    }
};