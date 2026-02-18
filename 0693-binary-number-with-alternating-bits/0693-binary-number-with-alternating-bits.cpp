class Solution {
public:
    bool hasAlternatingBits(int n) {
        string bits = "";
        
        // Convert number to binary string
        while (n > 0) {
            bits = char((n % 2) + '0') + bits;
            n /= 2;
        }

        // Check alternating bits
        for (int i = 0; i < bits.length() - 1; i++) {
            if (bits[i] == bits[i + 1]) {
                return false;
            }
        }
        return true;
    }
};
