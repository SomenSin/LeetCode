class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),smallest=INT_MAX,sIndex;

        for(int i=0;i<n;i++) {
            if(nums[i]<smallest) {
                smallest = nums[i];
                sIndex = i;
            }
        }
        if(sIndex==0) {
            int index=n;
            while(index--) {
                if(nums[index]==smallest) {
                    sIndex=index;
                }
                else {
                    break;
                }
            }
        }
        
        int leftShift=sIndex;
        while(leftShift--) {
            int store=nums[0];
            for(int i=1;i<n;i++) {
                nums[i-1] = nums[i];
            }
            nums[n-1] = store;
        }
        
        for(int i=1;i<n;i++) {
            if(nums[i-1] > nums[i]) {
                return 0;
            }
        }
        return 1;
    }
};