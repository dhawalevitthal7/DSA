class Solution {
public:
    int maxrob(vector<int>& nums, int n,vector<int>& dp){
        if(n>=nums.size()) return 0;
        if(dp[n]!=-1) return dp[n];
        int steal = nums[n]+maxrob(nums,n+2,dp);
        int skip = maxrob(nums,n+1,dp);
        return dp[n]=max(steal,skip);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return maxrob(nums,0,dp);
    }
};