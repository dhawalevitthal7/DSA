class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int mini = 1;
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            maxi = max(maxi,piles[i]);
        }
        while(mini<=maxi){
            int mid = mini + (maxi-mini)/2;
            long long cnt = 0;
            for(int j=0;j<n;j++){
                int num = piles[j];
                cnt += (piles[j] + mid - 1) / mid;
            }
            if(cnt<=h) maxi=mid-1;
            else mini = mid+1;
        }
        return mini;
    }
};