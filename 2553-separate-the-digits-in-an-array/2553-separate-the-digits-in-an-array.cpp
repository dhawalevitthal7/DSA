class Solution {
public:
    vector<int> ans;
    void func(int num){
        stack<int> st;
        while(num>0){
            int rem = num%10;
            st.push(rem);
            num = num/10;
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            func(nums[i]);
        }
        return ans;
    }
};