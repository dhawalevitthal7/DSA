class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        long long horsum = 0;
        long long versum = 0;
        vector<long long> hor;
        vector<long long> ver;
        for(int i=0;i<n;i++){
            int k=0;
            while(k<m){
                horsum+=(long long)grid[i][k];
                k++;
            }
            hor.push_back(horsum);
        }
        for(int i=0;i<m;i++){
            int k =0;
            while(k<n){
                versum+=(long long)grid[k][i];
                k++;
            }
            ver.push_back(versum);
        }
        bool ans = true;
        // int i=0,j=0;
        // while(i<n || j<m){
        //     if(hor[i]==(hor[n-1]-hor[i])) return true;
        //     if(ver[j]==(ver[m-1]-ver[j])) return true;
        //     i++;
        //     j++;
        // }
        for(int i=0;i<n;i++){
            if(hor[i]==(hor[n-1]-hor[i])){
                return true;
            }
        }
        for(int i=0;i<m;i++){
            if(ver[i]==(ver[m-1]-ver[i])) return true;
        }
        return false;
    }
};