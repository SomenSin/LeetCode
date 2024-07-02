class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        cycleSort(nums);

        for(int i=0;i<nums.size();i++) {
            if(nums[i] != i+1) {
                return i+1;
            }
        }

        return nums.size()+1;
    }
      void cycleSort(vector<int>& nums) {
        int i=0,n=nums.size();
        
        while(i<n) {
            
            if( 0 < nums[i] && nums[i] <= n && nums[i] != nums[nums[i]-1] ) {
                int correctIndex = nums[i] - 1;
                swap(nums[i],nums[correctIndex]);
            }
            else {
                i++;
            }
        }
    }
};