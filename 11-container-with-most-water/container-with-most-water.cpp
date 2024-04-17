class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int ans = 0;
        while(i<j) {    
            int curArea = min(h[i],h[j]) * (j-i);
            ans = max(ans,curArea);
            if(h[i]<h[j]) {
                i++;
            }
            else {
                j--;
            }
        }
        return ans;
    }
};