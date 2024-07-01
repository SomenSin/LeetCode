class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums);
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != i) {
                return i;
            }
        }
        return nums.size();
    }

    void sort(vector<int>& nums) {
        int n = nums.size(), i = 0;
        while(i < n) {
            int correctIndex = nums[i];
            if(nums[i] < n && nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }
    }
};
