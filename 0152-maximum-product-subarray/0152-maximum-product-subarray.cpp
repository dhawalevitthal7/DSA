class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int prefixmax = 1;
        int suffixmax = 1;
        int maxpre = INT_MIN;
        int maxsuff = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                prefixmax = 1;
                maxpre = max(maxpre,nums[i]);
                continue;
            }
            prefixmax *= nums[i];
            maxpre = max(maxpre,prefixmax);
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==0){
                suffixmax = 1;
                maxsuff = max(maxsuff,nums[i]);
                continue;
            }
            suffixmax *= nums[i];
            maxsuff = max(maxsuff,suffixmax);
        }
        return max(maxsuff,maxpre);
    }
};