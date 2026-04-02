class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n = positions.size();
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({positions[i],i});
        }
        sort(p.begin(),p.end());
        stack<int> st;
        for(int i=0;i<n;i++){
            int ind = p[i].second;
            if(directions[ind]=='R') st.push(ind);
            else{
                while(!st.empty() && directions[st.top()]=='R'){
                    int j = st.top();
                    if(healths[j]<healths[ind]){
                        healths[j] = -1;
                        healths[ind] -=1;
                        st.pop();
                    }
                    else if(healths[j]>healths[ind]){
                        healths[j] -=1;
                        healths[ind] = -1;
                        break;
                    }
                    else{
                        healths[j] =-1;
                        healths[ind]=-1;
                        st.pop();
                        break;
                    }
                }
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(healths[i]>-1) ans.push_back(healths[i]);
        }
        return ans;
    }
};