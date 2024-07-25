class Solution {
public:
    void merge(vector<int> & nums,int s,int e,int mid) {
        int size1 = mid-s+1,size2 = e-mid;
        vector<int> left(size1),right(size2);
        for(int i=0;i<size1;i++) {
            left[i] = nums[s+i];
        }
        for(int i=0;i<size2;i++) {
            right[i] = nums[mid+1+i];
        }

        int i=0,j=0,index=s;
        while(i<size1 && j<size2) {
            if(left[i] <= right[j]) {
                nums[index++] = left[i++];
            }
            else {
                nums[index++] = right[j++];
            }
        }
        while(i<size1) {
            nums[index++] = left[i++];
        }
        while(j<size2) {
            nums[index++] = right[j++];
        }

    }

    void spiltArr(vector<int> & nums,int s,int e) {
        if(s>=e) {
            return;
        }
        int mid = s + (e-s)/2;
        spiltArr(nums,s,mid);
        spiltArr(nums,mid+1,e);
        merge(nums,s,e,mid);
    }

    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();

        spiltArr(nums,0,n-1);

        return nums;
    }
};