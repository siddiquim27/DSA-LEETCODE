class Solution {
public:
    bool isvowel(char s){
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u') return 1;
        return 0;
    }
    int maxFreqSum(string s) {
        map<char,int> mp;
        for(auto p:s) mp[p]++;
        int v=0,c=0;
        for(auto p:mp){
            if(isvowel(p.first)) v=max(v,p.second);
            else c=max(c,p.second);
        }
        return v+c;
    }
};