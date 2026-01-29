class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        int n = s.length();
        string ans ="";
        for(int i = 0; i < n; i++){
            if(s[i] == ')') cnt--;
            if(cnt != 0) ans.push_back(s[i]);
            if(s[i] == '(') cnt++;
           
                
                
            } 
        
        return ans;
    }
};