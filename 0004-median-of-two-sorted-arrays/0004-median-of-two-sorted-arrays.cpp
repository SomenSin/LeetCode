class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.begin(),nums1.end());
        for(auto i:nums2)
        {
            ans.push_back(i);
        }
        sort(ans.begin(),ans.end()); //SORTING 
        int v=ans.size();
        return v%2==0?(ans[v/2]+ans[v/2-1])/(double)(2):(double)ans[v/2];
        
    }
};
