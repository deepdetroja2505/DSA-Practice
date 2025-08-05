class Solution {
public:
    int reverse(int x) {
        long long r = 0;
        while (x != 0) {
            long long ld = x % 10;
            r = (r * 10) + ld;
            x = x / 10;
        }
        if (r > INT_MAX || r < INT_MIN) {
            return 0;
        }
        return r;
    }
};
