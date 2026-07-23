class Solution {
public:
    void solve(int i,vector<int>& temp,int target, vector<int>& candidates, vector<vector<int>>& ans){
        if(target == 0){
            ans.push_back(temp);
            return;
        }
        if(i>=candidates.size() || target<0) return;
        // take condition
        temp.push_back(candidates[i]);
        solve(i,temp,target-candidates[i],candidates,ans);
        // dont take / skip
        temp.pop_back();
        solve(i+1,temp,target,candidates,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(0,temp,target,candidates,ans);
        return ans;
    }
};