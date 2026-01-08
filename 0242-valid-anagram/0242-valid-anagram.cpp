class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        int freq[256] = {0};

        for(char c : s) freq[c]++;
        for(char c: t) freq[c]--;

        for(int i= 0; i < 256; i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};