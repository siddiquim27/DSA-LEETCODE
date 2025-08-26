
    int firstOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            first = mid;
            high = mid - 1;  // move left
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return first;
    }


// Find last occurrence
int lastOccurrence(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1, last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            last = mid;
            low = mid + 1;  // move right
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return last;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
         int first = firstOccurrence(nums, target);
         int last = lastOccurrence(nums, target);

        return {first , last};
        
    }
};