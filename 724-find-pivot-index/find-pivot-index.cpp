class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size(),ans=-1;
        vector<int> prefixSum(n,0),postfixSum(n,0);
        for(int i=0;i<n;i++) {
            if(i!=0) {
                prefixSum[i] += prefixSum[i-1] + nums[i-1];
                postfixSum[n-1-i] += postfixSum[n-i] + nums[n-i];
            }
        }
        for(int i=0;i<n;i++) {
             cout<<prefixSum[i]<<" ";
        } 
        cout<<endl;
        for(int i=0;i<n;i++) {
             cout<<postfixSum[i]<<" ";
        } 
        for(int i=0;i<n;i++) {
            if( prefixSum[i] == postfixSum[i] ) {
                ans = i;
                break;
            }
        }   
        return ans;
    }
};