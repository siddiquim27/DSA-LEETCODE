class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> dup;
        for(int i = 0; i < nums.size(); i++){
            if(dup.contains(nums[i])){
                return true;
            }
            dup.insert(nums[i]);
        }
        return false;
    }
};