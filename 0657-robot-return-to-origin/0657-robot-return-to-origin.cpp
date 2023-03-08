class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int v=0,h=0;
        
        for(int i=0;i<n;i++)
        {
            char ch = moves[i];
            switch (ch) {
                case 'R':
                    h++;
                    break;
                case 'L':
                    h--;
                    break;
                case 'U':
                    v++;
                    break;
                case 'D':
                    v--;
                    break;

            }
        }
        return (!v && !h)?1:0;
    }
};