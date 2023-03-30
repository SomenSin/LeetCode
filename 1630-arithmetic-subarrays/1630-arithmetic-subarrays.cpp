class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        int n = nums.size(),m=l.size(),j=0;
        while(j<m)
        {
            int s = l[j];
            int e = r[j++];
            vector<int> tmp;
            for(int k=s;k<=e;k++)
            {
                tmp.push_back(nums[k]);
            }
            sort(tmp.begin(),tmp.end());
            bool a=1;
            for(int k=0;k<tmp.size()-1;k++)
            {
                if(!(tmp[k+1] - tmp[k] == tmp[1] - tmp[0] )) {
                    a=0;
                    break;
                }
            }
            ans.push_back(a);
        }


        return ans;
    }
};