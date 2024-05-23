class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0,i=0,zeroCnt=0,ans=0,n=nums.size();
        while(i<n) {
            if(!nums[i]) {
                zeroCnt++;
            }
            while(zeroCnt > 1) {
                if(!nums[start++]) {
                    zeroCnt--;
                }
            }
            int size = i-start;
            ans = max(ans,size);
            i++;
        }
        return ans;
    }
};