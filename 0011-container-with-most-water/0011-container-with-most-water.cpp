class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size()-1;
        int ans = 0;
        while(l<r){
            if(height[l]<height[r]){
                ans = max(ans,height[l]*(r-l));
                l++;
            }
            else if(height[l]>height[r]){
                ans = max(ans,height[r]*(r-l));
                r--;
            }
            else {
                ans = max(ans,height[r]*(r-l));
                l++;
                r--;
            }
        }
        return ans;
    }
};