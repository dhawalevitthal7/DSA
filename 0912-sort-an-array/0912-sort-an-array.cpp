class Solution {
public:
    void merge(vector<int>& arr,int left,int mid,int right){
        int l1 = mid-left+1;
        int l2 = right-mid;
        vector<int> k1(l1),k2(l2);
        for(int i=0;i<l1;i++){
            k1[i]=arr[left+i];
        }
        for(int j=0;j<l2;j++){
            k2[j]=arr[mid+1+j];
        }
        int i=0,j=0,k=left;
        while(i<l1 && j<l2){
            if(k1[i]<=k2[j]) {
                arr[k++] = k1[i];
                i++;
            }
            else {
                arr[k++] = k2[j];
                j++;
            }
        }
        while(i<l1){
            arr[k++] = k1[i++];
        }
        while(j<l2){
            arr[k++] = k2[j++];
        }
    }
    void mergesort(vector<int>&arr,int left,int right){
        if(left>=right) return;
        int mid = left + (right-left) / 2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }


    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        mergesort(nums,0,n-1);
        return nums;
    }
};