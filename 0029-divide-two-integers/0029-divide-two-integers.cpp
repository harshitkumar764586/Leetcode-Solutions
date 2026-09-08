class Solution {
public:
    int divide(int dividend, int divisor) {
        
        
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);

        long long ans = 0;

        
        bool negative = (dividend < 0) ^ (divisor < 0);

        while (dvd >= dvs) {
            
            long long temp = dvs;
            long long multiple = 1;

            
            while (dvd >= temp + temp) {
                temp += temp;
                multiple += multiple;
            }

            dvd -= temp;
            ans += multiple;
        }

        if (negative)
            ans = -ans;

        return (int)ans;
    }
};