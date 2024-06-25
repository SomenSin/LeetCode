class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st=0,md=0,ed=nums.size()-1; 
        while(md <= ed) {
            if(nums[md] == 0) {
                swap(nums[st],nums[md]);
                st++;
                md++;
            }
            else if(nums[md] == 1) {
                md++;
            }
            else {
                swap(nums[md],nums[ed]);
                ed--;
            }
        }
    }
};