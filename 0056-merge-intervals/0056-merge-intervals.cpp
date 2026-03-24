class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int i=0, n=intervals.size();
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());
        while(i<n){
            vector<int> arr = intervals[i];
            i++;
            while(i < n && intervals[i][0] <= arr[1]){
                arr[0] = min(arr[0],intervals[i][0]);
                arr[1] = max(arr[1],intervals[i][1]);
                i++;
            }
            ans.push_back(arr);
        }
        return ans;
    }
};