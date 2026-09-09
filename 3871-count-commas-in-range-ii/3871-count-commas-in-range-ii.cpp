class Solution {
public:
    long long countCommas(long long n) {
        long long r=0;
        for(long long i=1000;i<=n;i *=1000){
            r +=n-i+1;
        }
        return r;
    }
};