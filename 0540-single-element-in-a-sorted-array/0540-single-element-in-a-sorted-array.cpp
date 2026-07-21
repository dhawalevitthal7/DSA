class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=n-1;
        int mid = i+(j-i)/2;
        while(i<=j){
            mid = i+(j-i)/2;
            if(mid+1<n && mid-1>=0){
            if( mid%2==0 && nums[mid+1]==nums[mid]) i=mid+1;
            else if(mid%2==0 && nums[mid-1]==nums[mid]) j=mid-1;
            else if(mid%2!=0 && nums[mid-1]==nums[mid]) i=mid+1;
            else if(mid%2!=0 && nums[mid+1]==nums[mid]) j=mid-1;
            else return nums[mid];
            }
            else break;
        }
        return nums[mid];
    }
};