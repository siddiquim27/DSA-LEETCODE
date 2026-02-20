class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool> state(101, false);

        for(int b : bulbs){
            state[b] = !state[b];
        }

        vector<int> ans ;
        for(int i = 1; i <= 100; i++){
            if(state[i]) ans.push_back(i);
        }
        return ans;
    }
};