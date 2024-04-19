class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0,n=nums.size(),size=0;
        double avg = 0.0,ans = INT_MIN;
        while(j<n) {
            avg += nums[j++];
            size++;
            if( size == k ) {
                ans = max(ans,avg/k);
            }
            else if( size > k) {
                avg -= nums[i++];
                ans = max(ans,avg/k);
            }
        }
        return ans;
    }
};