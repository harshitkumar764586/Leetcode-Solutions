class Solution {
public:
    string longestPalindrome(string s) {
        
    int st=0;
    int mx=1;
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int type=0;type<2;type++){
        int l=i;
        int r=i+ type;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>mx){
                st=l;
                mx=r-l+1;

            }
            l--;
            r++;
        }
    
    }

    }
    return s.substr(st,mx);
    }
};