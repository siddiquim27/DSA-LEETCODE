class Solution {
public:
    int majorityElement(vector<int>& nums) {
     unordered_map<int, int> mp;
     for(int majority : nums)
        mp[majority]++;
     
     int maxCount = 0; int ans = 0;
     for(auto it : mp){
        if(it.second > maxCount){
            maxCount = it.second;
            ans = it.first;
        }
    }
    return ans;


        
    }
};