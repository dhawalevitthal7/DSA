class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalgas = 0;
        int totalcost = 0;
        for(int i=0;i<gas.size();i++){
            totalgas+=gas[i];
        }
        for(int j=0;j<cost.size();j++) totalcost += cost[j];
        if(totalgas<totalcost)  return -1;
        int start = 0;
        int currGas = 0;
        for(int i=0;i<gas.size();i++){
            currGas += gas[i] - cost[i];
            if(currGas < 0){
                start = i+1;
                currGas = 0;
            }
        }
        return start;
    }
};