class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         cycleSort(nums);

        for(int i=0;i<nums.size();i++) {
            if(nums[i] != i+1) {
                return {nums[i],i+1};
            }
        }

        return {};
    }
    void cycleSort(vector<int>& nums) {
        int i=0,n=nums.size();
        
        while(i<n) {
            int correctIndex = nums[i] - 1;
            if(nums[i] != nums[correctIndex]) {
                swap(nums[i],nums[correctIndex]);
            }
            else {
                i++;
            }
        }
    }
};