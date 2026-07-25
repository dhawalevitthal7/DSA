class Solution {
public:
    int func(vector<vector<int>>& arr,vector<vector<int>>& dp,int n){
        for(int i=n-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                int down = arr[i][j] + dp[i+1][j];
                int diagonal = arr[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down,diagonal);
            }
        }
        return dp[0][0];
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[0].size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++) dp[n-1][i] = triangle[n-1][i];
        return func(triangle,dp,n);
    }
};