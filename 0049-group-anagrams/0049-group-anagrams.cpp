class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        vector<pair<string,int>> st;
        for(int i=0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            st.push_back({s,i});
        }
        vector<string> ans;
        sort(st.begin(),st.end());
        int i=0,j=0;
        while(i<st.size() && j<st.size()){
            int ind = st[j].second;
            if(st[i].first==st[j].first) {
                ans.push_back(strs[ind]);
                j++;
            }
            else{
                res.push_back(ans);
                i=j;
                ans.clear();
            }
        }
        res.push_back(ans);
        return res;
    }
};