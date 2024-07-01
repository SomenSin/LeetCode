class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        sort(nums);
    for(int i=0;i<nums.size();i++) {
            cout<<nums[i];
        }
        for(int i=0;i<nums.size();i++) {
            if(nums[i] != i+1) {
                ans.push_back(i+1);
            }
        }

        return ans;
    }

    void sort(vector<int>& nums) {
        
        int n = nums.size(), i = 0;
        
        while(i < n) {
        
            int correctIndex = nums[i]-1;
            if(nums[i] != nums[correctIndex]) {
                swap(nums[i], nums[correctIndex]);
            } else {
                i++;
            }
        }
    }
};