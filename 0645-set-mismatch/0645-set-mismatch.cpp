class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int> freq(nums.size() + 1, 0);
    int duplicate = -1, missing = -1;

    for (int x : nums) {
        freq[x]++;
    }

    for (int i = 1; i <= nums.size(); i++) {
        if (freq[i] == 2) duplicate = i;
        if (freq[i] == 0) missing = i;
    }

    return {duplicate, missing};
}
};