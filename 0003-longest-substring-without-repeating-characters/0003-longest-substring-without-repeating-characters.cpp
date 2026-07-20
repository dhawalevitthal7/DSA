class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i=0,j=0;
        int ans = 0;
        while(j<s.size() && i<s.size()){
            if(mp[s[j]]>0){
                while(s[i]!=s[j]){
                    mp[s[i]]--;
                    i++;
                }
                mp[s[i]]--;
                i++;
                mp[s[j]]++;
                j++;
            }
            else{
                mp[s[j]]++;
                ans = max(ans,j-i+1);
                j++;
            }
        }
        return ans;
    }
};