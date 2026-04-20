class Solution {
public:
    int mincost(vector<int>& cost,int n,vector<int>& dp){
        if(n>=cost.size()) return 0;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=cost[n]+ min(mincost(cost,n+1,dp),mincost(cost,n+2,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n,-1);
        return min(mincost(cost,0,dp),mincost(cost,1,dp));
    }
};