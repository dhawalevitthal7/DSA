class Solution {
public:
    // int mincost(vector<int>& cost,int n,vector<int>& dp){
    //     if(n>=cost.size()) return 0;
    //     if(dp[n]!=-1) return dp[n];
    //     return dp[n]=cost[n]+ min(mincost(cost,n+1,dp),mincost(cost,n+2,dp));
    // }
    // int minCostClimbingStairs(vector<int>& cost) {
    //     int n = cost.size();
    //     vector<int> dp(n,-1);
    //     return min(mincost(cost,0,dp),mincost(cost,1,dp));
    // }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n);
        if(n<2) return 0;
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<n;i++){
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
        }
        return min(dp[n-1],dp[n-2]);
    }
};