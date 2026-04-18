class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxfreq = 0;
        int ans = 0;
        unordered_map<char,int> mp;
        int l = 0;
        int r = 0;
        while(r<n){
            mp[s[r]]++;
            maxfreq = max(maxfreq,mp[s[r]]);
            while((r-l+1)-maxfreq>k){
                mp[s[l]]--;
                maxfreq = 0;
                for(auto it : mp){
                    maxfreq = max(maxfreq,it.second);
                }
                l++;
            }
            if((r-l+1)-maxfreq<=k){
                ans = max(ans,(r-l+1));
            }
            r++;
        }
        return ans;
    }
};