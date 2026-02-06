class Solution {
public:
    string reverseWords(string s) {
    string ans = "";
    string word = "";

    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                ans = word + (ans.empty() ? "" : " ") + ans;
                word = "";
            }
        } else {
            word.push_back(c);
        }
    }

    if (!word.empty())
        ans = word + (ans.empty() ? "" : " ") + ans;

    return ans;
}

};