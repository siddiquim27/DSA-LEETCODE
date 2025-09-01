class Solution {

    // calculating max value in give array
    int findMax(vector<int> &arr){
        int maxi = INT_MIN;
        for(int i = 0; i < arr.size(); i++){
            maxi = max(maxi , arr[i]);
        }
        return maxi;
        
    }

    // calculating total number of hrs to eat bananas by koko

    long long total_hrs(vector<int> &arr ,int  hourly){
        long long totalH = 0;
        int n = arr.size();
        

        for(int i = 0; i< n; i++){
            totalH += (arr[i] + hourly - 1) / hourly;
        }
        return totalH;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
       
        int low = 1 , high = findMax(piles);
        int ans = INT_MAX;
        int n1 = piles.size();

        while(low <= high){
            int mid = low + (high - low)/2;
           long long  totalH = total_hrs(piles , mid);

            if(totalH <= h){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;

        
    }
};