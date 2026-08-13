class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    //     vector<int> v;
    //     int temp = 0;
    //     for(int i=0;i<nums.size();i++){
    //         if(i==0){
    //             temp = nums[i];
    //             v.push_back(nums[i]);
    //         }
    //         else{
    //             if(nums[i]==temp) continue;
    //             else{
    //                 temp = nums[i];
    //                 v.push_back(nums[i]);
    //             }
    //         }
    //     }
    //     int k=0;
    //    for(auto it : v){
    //     nums[k++] = it;
    //    }
    //    return v.size();
    int n = nums.size();
    int i=-1,j=0;
    while(j<n){
        if(i==-1){
            i++;
            nums[i] = nums[j];
        }
        else if(nums[i]!=nums[j]){
            i++;
            nums[i] = nums[j];
        }
        j++;
    }
    return i+1;
    }
};