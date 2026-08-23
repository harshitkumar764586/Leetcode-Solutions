class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int max1=0;
        for(int i=0;i<n;i++){
            if(i>max1) return false;
            max1=max(max1,i+ nums[i]);
            if(max1 >=n-1){
                return true;

            }

        }
        return false;

    }
};