class Solution {
public:
    int val(char ch)
    {
        switch (ch){
            case 'R':
                return 1;
            case 'G':
                return 2;
            case 'B':
                return 4;
        }
        return 0;
    }
    int countPoints(string r) {
        int total=0,n=r.size();  
        int p[10]={0};
        for(int i=0;i<n;i+=2)
        {
            p[r[i+1]-'0'] = p[r[i+1]-'0'] | val(r[i]);
            if(p[r[i+1]-'0']==7 && p[r[i+1]-'0']!=-1) {
                total++;
                p[r[i+1]-'0']=-1;
            }
        }  
        return total;
    }
};