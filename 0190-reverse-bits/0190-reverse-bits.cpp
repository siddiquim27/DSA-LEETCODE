class Solution {
public:
    int reverseBits(int n) {
        int ans = 0;

        for(int i = 0; i < 32; i++) {
            ans = (ans << 1) | (n & 1); // take last bit
            n >>= 1;                    // move to next bit
        }

        return ans;
    }
};
