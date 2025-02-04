class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1)
            return 0;
        int left=0, right=1;
        int best=0,curr=0;
        while(right<prices.size()){
            if(prices[left]-prices[right]>0){
                left = right;
                right ++;
            }
            else{
                curr = prices[right]-prices[left];
                if(curr>best)
                    best=curr;
                right++;
            }
        }
        return best;
    }
};