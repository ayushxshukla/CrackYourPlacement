class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minTillDate=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            ans=max(ans,prices[i]-minTillDate);
            minTillDate=min(minTillDate,prices[i]);
        }

        return ans;
    }
};