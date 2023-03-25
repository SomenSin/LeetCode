class Solution {
public:
    int shortestSubarray(vector<int>& A, int k) {
        int n=A.size(),ans=INT_MAX;
        deque <long> dq;
        vector<long> nums(n,A[0]);
        for(int i=0;i<n;i++)
        {
            if(i>0) {
                nums[i] = nums[i-1] + A[i];   //prefix sum
            }
            if(nums[i] >= k) {
                ans = min(ans,i+1);     //updating ans 
            }
            while(!dq.empty() && nums[i]-nums[dq.front()] >=k )     //removing the front for shorter ans
            {
                ans = min(ans,i- (int)dq.front());    //updating ans for min. length
                dq.pop_front();
            }
            while(!dq.empty() && nums[dq.back()] >= nums[i] )      //for keeping monotonic queue
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        return ans==INT_MAX?-1: ans;
    }
};