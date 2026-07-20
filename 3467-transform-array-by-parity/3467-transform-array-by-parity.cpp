class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        int even = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) even++;
        }
        int r=0;
        while(r<n){
            if(r<even) nums[r]=0;
            else nums[r] = 1;
            r++;
        }
        return nums;
    }
};