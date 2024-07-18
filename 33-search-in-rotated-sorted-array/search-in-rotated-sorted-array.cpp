class Solution {
public:
    int bsPivot(vector<int>& nums) {
        int n=nums.size(),s=0,e=nums.size()-1;
        while(s<=e) {
            int mid = s+(e-s)/2;
            if(nums[mid] > nums[(mid+1)%n]) {
                return (mid+1)%n;
            }
            else if(nums[mid] >= nums[s]) {
                s = mid+1;
            }
            else {
                e = mid-1;
            }
        }
        return 0;
    }
    int bs(int s,int e,vector<int> nums,int x) {
        while(s<=e) {
            int mid = s + (e-s)/2;
            if(nums[mid]==x) {
                return mid;
            }
            else if(nums[mid] > x) {
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n==1) {
            if(nums[0]==target) {
                return 0;
            }
            else {
                return -1;
            }
        }
        int pivot = bsPivot(nums);
        if(pivot==0) {
            return bs(0,n-1,nums,target);
        }

        int ans = bs(0,pivot-1,nums,target);
        if(ans!= -1) {
            return ans;
        }
        ans = bs(pivot,n-1,nums,target);
        if(ans!= -1) {
            return ans;
        }
        return -1;
    }
};