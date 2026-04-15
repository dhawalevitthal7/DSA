class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int ans = INT_MAX;
        int n = words.size();
        if(words[startIndex]==target) return 0;
        int cnt = 1;
        int i =( startIndex - 1 + n)%n;
        bool flag = false;
        while(i!=startIndex){
            if(words[i]==target){
                ans = min(ans,(cnt));
                flag = true;
            }
            cnt++;
            i = (i-1+n)%n;
        }
         i = (startIndex + 1) % n;
        cnt=1;
        while(i!=startIndex){
            if(words[i]==target){
                ans = min(ans,(cnt));
                flag = true;
            }
            cnt++;
            i = (i+1)%n;
        }
        if(flag==false) return -1;
        return ans;
    }
};