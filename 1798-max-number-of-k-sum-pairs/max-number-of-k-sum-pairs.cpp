class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int st=0,ed=nums.size()-1,ans=0;
        while(st<ed) {
            int sum = nums[st]+nums[ed];
            if(sum == k) {
                ans++;
                st++;
                ed--;
            }
            else if(sum > k) {
                ed--;
            }
            else {
                st++;
            }
        }
        return ans;
    }
};