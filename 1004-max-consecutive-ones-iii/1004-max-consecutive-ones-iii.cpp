class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n =nums.size();
        int i=0,j=0,cnt=0,ans=0;
        while(i<n && j<n){
            if(nums[j]==0) cnt++;
            while(cnt>k){
                if(nums[i]==0){
                    cnt--;
                    i++;
                    break;
                }
                else{
                    i++;
                }
            } 
            ans = max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};