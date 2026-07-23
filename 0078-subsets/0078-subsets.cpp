class Solution {
public:
    vector<vector<int>> func(vector<int>& nums,int i,vector<int>temp){
        vector<vector<int>> ans;
        if(i>=nums.size()){
            ans.push_back(temp);
            return ans;
        }
        // if we take 
        temp.push_back(nums[i]);
        vector<vector<int>> take = func(nums,i+1,temp);
        // if we dont take
        temp.pop_back();
        vector<vector<int>> nottake = func(nums,i+1,temp);
        take.insert(take.end(),nottake.begin(),nottake.end());
        return take;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        return func(nums,0,temp);
    }
};