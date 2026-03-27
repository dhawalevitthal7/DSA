class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> ans;
        int n=mat.size(),m=mat[0].size();
        for(int i=0;i<n;i++){
            vector<int> row;
            for(int j=0;j<m;j++){
                row.push_back(mat[i][j]);
            }
            ans.push_back(row);
        }
        
        for(int i=0;i<n;i++){
            int ind = k%m;
            if(i%2==0){
                int j =0;
                for(int v=ind;v<m;v++){
                    ans[i][j++]=mat[i][v];
                }
                for(int v=0;v<ind;v++){
                    ans[i][j++]=mat[i][v];
                }
            }
            else{
                int idx = m-ind;
                int j=0;
                for(int v=idx;v<m;v++){
                    ans[i][j++]=mat[i][v];
                }
                for(int v=0;v<idx;v++){
                    ans[i][j++] = mat[i][v];
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(ans[i][j]!=mat[i][j]) return false;
            }
        }
        return true;
    }
};