class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int t=INT_MAX,maxi=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<t){
                t=min(prices[i],t);
            }
            if(prices[i]>t){
                int r=prices[i]-t;
                maxi=max(r,maxi);
            }
        }
        return maxi;
    }
};