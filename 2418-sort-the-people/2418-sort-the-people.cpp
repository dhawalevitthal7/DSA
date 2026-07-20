class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,int> mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=i;
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector<string> st;
        for(int i=0;i<heights.size();i++){
            int ind = mp[heights[i]];
            st.push_back(names[ind]);
        }
        return st;
    }
};