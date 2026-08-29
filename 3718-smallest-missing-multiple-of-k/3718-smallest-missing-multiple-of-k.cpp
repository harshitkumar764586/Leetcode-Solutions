class Solution {
    /*
    class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> seen(nums.begin(), nums.end());
        int ans = k;
        while (seen.count(ans)) {
            ans += k;
        }
        return ans;
    }
};
*/
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_set<int>s(nums.begin(),nums.end());
       int ans=k;
       while(s.count(ans)){
        ans +=k;
       }
       return ans;
    }
};