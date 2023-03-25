class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s=0,e=0,n=nums.size(),sum=0,ans=INT_MAX;
        while(e<n)
        {
            sum += nums[e];
            while(sum >= target) {
                ans = min(ans,e-s+1);
                sum -= nums[s];
                s++;
            }
            e++;
        }
        return ans==INT_MAX? 0 : ans;
    }
};