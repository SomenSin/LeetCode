class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int s=0;
        while(pq.size()>1) {
            int x = pq.top()-1;
            pq.pop();
            int y=pq.top()-1;
            pq.pop();
            
            if(x>0) {
                pq.push(x);
            }
            if(y>0) {
                pq.push(y);
            }
            s++;
        }
        return s;
    }
};