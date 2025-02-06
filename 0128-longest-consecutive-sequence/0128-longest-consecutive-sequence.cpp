class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s = {nums.begin(),nums.end()};
        int best=1;
        if(s.size() == 0)
            return 0 ;
        
        for(int num: s){
            int n= num;
            int count=0;
            if(s.find(n-1) != s.end())
                continue;
            while(s.find(n) != s.end()){
                count++;
                n++;
            }
            best = max(best,count);
        }
        return best;
    }
};