class Solution {
public:
    bool func(vector<int>& nums, int target,int ind,vector<vector<int>>& dp){
        if(target==0) return true;
        if(ind==0) return nums[0]==target;
        if(dp[ind][target]!=-1) return dp[ind][target];
        // pick
        int pick = false;
        if(target>=nums[ind]) {
            pick = func(nums,target-nums[ind],ind-1,dp);
        }
        // not pick
        int notpick = func(nums,target,ind-1,dp);
        return dp[ind][target] = (pick || notpick);
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }
        if(sum%2) return false;
        vector<vector<int>> dp(n,vector<int>((sum/2)+1,-1));
        return func(nums,sum/2,nums.size()-1,dp);
    }
};