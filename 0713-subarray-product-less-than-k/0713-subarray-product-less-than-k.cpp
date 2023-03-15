class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int c=0,n=nums.size(),tmp=1,j=0;
        if(k <= 1) {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            tmp *= nums[i];
            while(tmp >= k)
            {
                tmp /= nums[j];
                j++;
            }
            c += i-j+1;
        }
        return c;
    }
};

