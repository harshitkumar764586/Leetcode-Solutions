class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
          int minOdd = INT_MAX, minEven = INT_MAX;

        for (int x : nums1) {
            if (x % 2 == 0) {
                minEven = min(minEven, x);
            } else {
                minOdd = min(minOdd, x);
            }
        }

        // Case 1: Already all odd or all even
        if (minOdd == INT_MAX || minEven == INT_MAX) return true;

        // Case 2: Mixed parity → check smallest odd vs smallest even
        return minOdd < minEven;
    }
};