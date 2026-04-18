class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        int n = s.size();
        int m = t.size();
        for(int i =0;i<m;i++){
            mp[t[i]]++;
        }
        int l=0;
        int r=0;
        int maxrange = INT_MAX;
        string ans="";
        int count = m;
        int sidx = 0;
        while(r<n){
            if(mp[s[r]]>0) count --;
            mp[s[r]]--;

            while(count == 0){
                if(r-l+1<maxrange){
                    maxrange = r-l+1;
                    sidx = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0) count++;
                l++;
            }
            r++;
        }
        return maxrange == INT_MAX ? "" : s.substr(sidx,maxrange);
    }
};