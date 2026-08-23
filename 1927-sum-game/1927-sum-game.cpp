class Solution {
public:
    bool sumGame(string num) {
       int n=num.size();
       int half=n/2;
       int ls=0;
       int rs=0;
       int q1=0;
       int q2=0;
       for(int i=0;i<half;i++){
        if(num[i]=='?') q1++;
        else {
            ls +=num[i] -'0';

        }
        
       }
       for(int i=half;i<n;i++){
        if(num[i]=='?') q2++;
        else {
            rs += num[i] -'0';
        }
       }
       int diff=ls-rs;
       int q=q1+q2;
       if(q % 2==1) return true;
       return diff != (q2-q1)/2 * 9;
    }
};
       