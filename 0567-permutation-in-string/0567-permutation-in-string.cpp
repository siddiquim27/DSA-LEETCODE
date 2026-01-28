class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> freq;

        // freq of s1
        for (int i = 0; i < s1.length(); i++) {
            freq[s1[i]]++;
        }

        int winSize = s1.length();

        for (int i = 0; i < s2.length(); i++) {

            unordered_map<char,int> winFreq;

            // build window
            for (int j = i; j < i + winSize && j < s2.length(); j++) {
                winFreq[s2[j]]++;
            }

            // compare maps using simple for loop
            bool same = true;
            for (auto it : freq) {
                if (winFreq[it.first] != it.second) {
                    same = false;
                    break;
                }
            }

            if (same) return true;
        }
        return false;
    }
};
