class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int n = points.size();
        int ans = 1;
        sort(points.begin(),points.end());
        int mid = points[0][1];
        int i = 1;
        while(i<n){
            if(points[i][0]<=mid){
                mid = min(mid,points[i][1]);
            }
            else{
                ans++;
                mid = points[i][1];
            }
            i++;
        }
        return ans;
    }
};