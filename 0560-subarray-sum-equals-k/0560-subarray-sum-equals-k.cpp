class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // [2,4,5,3,2,1] k=6;
        int n = nums.size();
        int i = 0;
        int prefsum = 0;
        int ans = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            prefsum += nums[i];
            int remove = prefsum - k;
            ans += mp[remove];
            mp[prefsum]++;
        }
        return ans;
    }
};