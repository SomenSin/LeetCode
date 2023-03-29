class Solution {
public:
    int minimumSum(int nums) {
        vector<int> v;
        v.push_back(nums%10);
        nums /= 10;
        v.push_back(nums%10);
        nums /= 10;
        v.push_back(nums%10);
        nums /= 10;
        v.push_back(nums%10);
        sort(v.begin(),v.end());
        int num1 = v[0]*10+v[3];
        int num2 = v[1]*10 + v[2];
        return num1+num2;
    }
};