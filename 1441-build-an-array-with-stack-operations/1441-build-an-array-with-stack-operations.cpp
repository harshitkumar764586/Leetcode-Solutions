class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int j = 0;

        for (int i = 1; i <= target.back(); i++) {
            ans.push_back("Push");

            if (i != target[j]) {
                ans.push_back("Pop");
            } else {
                j++;
            }
        }

        return ans;
    }
};