class Solution {
public:
    bool checkOnesSegment(string s) {
        for (int i = 1; i < s.length(); ++i) {
            // If we find a '1' that is preceded by a '0', 
            // it means a new segment of ones has started.
            if (s[i - 1] == '0' && s[i] == '1') {
                return false;
            }
        }
        return true;
    }
};
