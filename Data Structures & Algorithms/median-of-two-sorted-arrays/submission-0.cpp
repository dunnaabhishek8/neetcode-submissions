class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        
        vector<int>ans;

        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

        while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
        }

        while(j<nums2.size()){
            ans.push_back(nums2[j]);
            j++;
        }
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        int s=0;
        int e=ans.size()-1;
        if(ans.size()%2==0){
           double result=ans[s+(e-s)/2]+ans[(s+(e-s)/2)+1];
            // cout<<ans[s+(e-s)/2]<<" "<<ans[(s+(e-s)/2)+1]<<" "<<s+(e-s)/2<<endl;
           return result/2;
        }
        else{
          double result=ans[s+(e-s)/2];
          return result;
        }


    }
};
