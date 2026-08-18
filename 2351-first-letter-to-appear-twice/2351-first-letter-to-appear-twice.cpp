class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int>n;
        for(char p:s){
            n[p]++;
           if(n[p]==2){
            return p;
         }

        }
        return ' ';
    }
};