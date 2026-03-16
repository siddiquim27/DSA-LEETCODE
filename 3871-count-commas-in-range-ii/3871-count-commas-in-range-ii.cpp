class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
        long long p = 1000;

        while(p <= n){
            commas += (n - p + 1);
            p *= 1000;

        }
        return commas;
    }
};