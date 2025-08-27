class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min = nums[0];

        for(int i = 0; i<n - 1; i++){
            if(nums[i] > nums[i + 1]){
                min = nums[i + 1];
            }
        }
        return min;
        
    }
};