class Solution {
public:
    int reverse(int x) {
        int ret = 0;        
        
        while (x != 0) {
            int last = x % 10;
            x /= 10;
            if (ret > INT_MAX/10 || (ret == INT_MAX / 10 && last > 7)) return 0; //7 because positive int max is 2^31 -1
            if (ret < INT_MIN/10 || (ret == INT_MIN / 10 && last < -8)) return 0;
            ret  = ret * 10 + last;
        }
        return ret;
    }
}; 