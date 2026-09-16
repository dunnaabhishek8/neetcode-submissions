class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int add=m;
        int i=0;

        while(i<n){
            nums1[add++]=nums2[i++];
        }

        sort(nums1.begin(),nums1.end());
    }
};