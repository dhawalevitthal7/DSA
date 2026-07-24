class Solution {
public:
    int func(int n,vector<int>& dp){
        if(n==1) return 1;
        else if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        return func(n-1,dp)+func(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
    }
};