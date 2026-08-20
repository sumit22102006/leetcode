// Last updated: 20/08/2026, 13:49:01
class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n <= 0)
            return false;

        while(n % 2 == 0) {
            n /= 2;
        }

        return n == 1;
    }
};