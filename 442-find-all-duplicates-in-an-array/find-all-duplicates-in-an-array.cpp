class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        cycleSort(nums);
        vector<int> ans;

        for(int i=0;i<nums.size();i++) {
            if(nums[i] != i+1 ) {
                ans.push_back(nums[i]);
            }
        }

        return ans;
    }
    void cycleSort(vector<int>& nums) {
        int i=0,n=nums.size();
        while(i<n) {
            int correctIndex = nums[i]-1;
            if(nums[i] != nums[correctIndex]) {
                swap(nums[i],nums[correctIndex]);
            }
            else {
                i++;
            }
        }
    }
};