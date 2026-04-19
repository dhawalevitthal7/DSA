class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        int n = nums1.size();
        int m = nums2.size();
        // for(int i=0;i<n;i++){
        //     int num = nums1[i];
        //     int l = i;
        //     int r = m-1;
        //     while(l<=r){
        //         int mid = (l+r)/2;
        //         if(nums2[mid]>=num){
        //             l=mid+1;
        //         }
        //         else{
        //             r=mid-1;
        //         }
        //     }
        //     if(r>=0 && nums2[r]>=num) ans = max(ans,(r-i));
        // }
        int i = 0;
        int j = 0;
        while(i<n && j<m){
            if(nums2[j]>=nums1[i]){
                ans = max(ans,j-i);
                j++;
            }
            else i++;
        }
        return ans;
    }
};