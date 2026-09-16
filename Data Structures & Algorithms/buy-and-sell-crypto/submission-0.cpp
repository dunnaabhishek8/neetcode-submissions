class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>prefix(prices.size(),0);
        prefix[prices.size()-1]=prices[prices.size()-1];
        for(int i=prices.size()-2;i>=0;i--){
            prefix[i]=max(prices[i],prefix[i+1]);
        }

        int count=0;

        for(int i=0;i<prices.size();i++){

            if(prefix[i]>prices[i]){
                count=max(count,prefix[i]-prices[i]);
            }
        }
        return count;
    }
};
