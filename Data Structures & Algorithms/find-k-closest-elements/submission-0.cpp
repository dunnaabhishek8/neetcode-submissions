class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int start=0;
        int end=arr.size()-k;

        while(start<end){
            int mid=start+(end-start)/2;
            
            if(x-arr[mid] > arr[mid+k]-x){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }

        vector<int>ans;

        for(int i=start;i<start+k;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};