class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n1 = s.size();
        int n2 = part.size();
        


        while(s.size() > 0 && s.find(part) < n1){
            if(s.find(part) < n1){
            s.erase(s.find(part) , n2);
        }

        }
        return  s;
    }
};