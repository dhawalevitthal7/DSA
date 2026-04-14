class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        for(int i=0;i<numRows;i++){
            vector<int> ans;
            if(i==0) res.push_back({1});
            else{
                int size = res[i-1].size();
                for(int j=0;j<size;j++){
                    if(j==0) ans.push_back(1);
                    else {
                        ans.push_back(res[i-1][j-1]+res[i-1][j]);
                    }
                }
                ans.push_back(1);
                res.push_back(ans);
            }
        }
        return res;
    }
};