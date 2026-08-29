class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        int minSalary = INT_MAX;
        int maxSalary = INT_MIN;
        int sum = 0;

     
        for (int i = 0; i < n; i++) {
            sum += salary[i];
            minSalary = min(minSalary, salary[i]);
            maxSalary = max(maxSalary, salary[i]);
        }

     
        sum -= (minSalary + maxSalary);

     
        return (double)sum / (n - 2);
    }
};
