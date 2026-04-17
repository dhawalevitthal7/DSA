class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> st;
        int n = s.size();
        int l=0;
        int r=0;
        int ans = 0;
        while(r<n){
            if(st.count(s[r]) && st[s[r]]>=l){
                l = st[s[r]]+1;
            }
            else{
                ans = max(ans,(r-l+1));
                st[s[r]]=r;
                r++;
            }
        }
        return ans;
    }
};