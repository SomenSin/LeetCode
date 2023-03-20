class Solution {
public:
    string categorizeBox(int l, int w, int ht, int m) {
        bool h=0,b=0;
        if(m>=100) {
            h=1;
        }
        long long tmp =  (long long)l * (long long) w * (long long) ht;
        if(l>=10000 || w>=10000 || ht>=10000 ||tmp >= 1000000000) {
            b=1;
        }
        if(b && h) {
            return "Both";
        }
        else if(!b && !h) {
            return "Neither";
        }
        else if(b) {
            return "Bulky";
        }
            
        return "Heavy";

    }
};