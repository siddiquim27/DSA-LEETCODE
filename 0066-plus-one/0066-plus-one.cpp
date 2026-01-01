class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int len = digits.size();
        for(int i = len - 1; i >= 0 ; i-- ){
            if(digits[i] < 9){
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
         // If all digits were 9 (like 999 → 1000)
        digits.insert(digits.begin(), 1);
        return digits;
           
    }
   
};