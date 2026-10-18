class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size(), total = 0;
        for (int i = 0; i < n; i++) {
            bitset<101> seen;
            int cnt = 0;
            for (int j = i; j < n; j++) {
                if (!seen[nums[j]]) {
                    seen[nums[j]] = 1;
                    cnt++;
                }
                total += cnt * cnt;
            }
        }
        return total;
    }
};