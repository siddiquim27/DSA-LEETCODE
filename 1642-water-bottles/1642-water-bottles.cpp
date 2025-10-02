class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles;
        int emptyBottle=numBottles;

        while(emptyBottle >= numExchange){
            ans=ans+(emptyBottle/numExchange);
            emptyBottle=emptyBottle%numExchange+(emptyBottle/numExchange);

        }

        return ans;
        
    }
};