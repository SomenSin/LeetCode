class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0,n=nums.size();
        while( j<n-1 ) {
            while(i<n-1 && nums[i]!=0) {
                i++;
            }
            j=i;
            while(j<n-1 && nums[j]==0) {
                j++;
            }  
            swap(nums[i],nums[j]);
        }
    }
};