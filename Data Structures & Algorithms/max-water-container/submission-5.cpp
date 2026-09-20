class Solution {
public:
    int maxArea(vector<int>& heights) {
        int s=0;
        int e=heights.size()-1;
        int maxi=0;
        while(s<e){
           if(heights[s]<heights[e]){
            maxi=max(maxi,(e-s)*heights[s]);
            s++;
           }
           else{
            maxi=max(maxi,(e-s)*heights[e]);
            e--;
           }
        }
        return maxi;

    }
};
