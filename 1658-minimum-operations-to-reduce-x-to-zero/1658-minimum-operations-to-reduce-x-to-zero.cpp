class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
       int s=0,e=0,ans=0,sum=0;
       int tsum = accumulate(nums.begin(),nums.end(),0);
       if(tsum == x) {
           return nums.size();
       }
       int rsum = tsum-x;
       while(e < nums.size())
       {
           sum += nums[e];
           while(s < e && sum > rsum) {
               sum -= nums[s++];
           }
            if(sum == rsum) {
               ans = max(ans,e-s+1);
           }
            e++;
       }
       return (ans==0)?-1:nums.size()-ans;
    }
};
