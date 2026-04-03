class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return{};
        string phone [] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        queue<string> q;
        q.push("");
        for(char d: digits){
            string letters = phone[d-'0'];
            int size = q.size();
            while(size--){
                string curr = q.front();
                q.pop();
                for(char ch : letters){
                    q.push(curr + ch);
                }
            }
        }
        vector<string> ans;
        while(!q.empty()){
            string st = q.front();
            q.pop();
            ans.push_back(st); 
        }
        return ans;
    }
};