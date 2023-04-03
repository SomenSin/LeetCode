class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.rbegin(),people.rend());
        int i = 0,j,n = people.size();
        for(i=0,j=n-1;i<=j;i++) {
            if(people[i]+people[j] <=limit) {
                --j;
            }
        }
        return i;
    }
};
