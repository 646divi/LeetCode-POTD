int maxProfit(vector<int>& prices) {
        int profit=0,buyday=prices[0];
        for(int i=1;i<prices.size();i++){
            if(prices[i]>buyday){
                profit=max(profit,prices[i]-buyday);
            }else if(buyday>prices[i]){
                buyday=prices[i];
            }
        }
        return profit;
    }
