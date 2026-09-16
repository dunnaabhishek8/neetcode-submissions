class Solution {
public:
    int maxArea(vector<int>& heights) {
        int water=0;
        int ans=INT_MIN;
        for(int i=0;i<heights.size();i++){

            for(int j=i+1;j<heights.size();j++){
                int width=j-i;
                int height=min(heights[i],heights[j]);
                ans=max(ans,height*width);
            }
        }
        return ans;
    }
};
