class Solution {
public:
    int func(int n,int m,string& text1,string& text2,vector<vector<int>>& dp){
        if(n<0 || m<0) return 0;
        if(dp[n][m]!=-1) return dp[n][m];
        if(text1[n]==text2[m]) return dp[n][m] = 1 + func(n-1,m-1,text1,text2,dp);
        return dp[n][m] = max(func(n-1,m,text1,text2,dp),func(n,m-1,text1,text2,dp));
    }
    int longestPalindromeSubseq(string s) {
        int n = s.size();
        string s2 = s;
        reverse(s2.begin(),s2.end());
        int m = s2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return func(n-1,m-1,s,s2,dp);
    }
};