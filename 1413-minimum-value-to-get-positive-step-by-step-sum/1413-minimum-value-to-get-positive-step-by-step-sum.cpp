class Solution {
public:
    int minStartValue(vector<int>& nums) {
         int ans = INT_MAX,running_sum=0;
         for(int i: nums) {
             running_sum += i;
             ans = min(ans,running_sum);
         }
         ans = (ans<0)?-(ans-1):1;
         return ans;
    }
};