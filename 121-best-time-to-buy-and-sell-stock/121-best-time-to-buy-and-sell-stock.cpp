class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_ind=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            min_ind=min(min_ind,prices[i]);
            ans=max(ans,prices[i]-min_ind);
        }
     return ans;
        
    }
};