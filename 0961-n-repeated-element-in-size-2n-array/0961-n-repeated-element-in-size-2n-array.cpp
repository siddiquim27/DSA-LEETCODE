class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int n:nums){
            if(mp[n]==1)return n;
            mp[n]=1;
        }
        return 0;
        
    }
};