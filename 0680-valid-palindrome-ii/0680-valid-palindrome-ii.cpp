class Solution {
public:
bool check(string &s,int l,int r){
     while(l<r){
        if(s[l]!= s[r]){
            return false;
        }
        l++;
        r--;
     }
     return true;
}
    bool validPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(s[l]!=s[r])
            {
                return check(s,l+1,r) || check(s,l,r-1);

            }
            l++;
            r--;
        }
        return true;
    }
};