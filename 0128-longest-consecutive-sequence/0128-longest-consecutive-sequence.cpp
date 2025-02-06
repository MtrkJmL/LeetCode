class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int best=1;
        if(nums.size() == 0)
            return 0 ;
        for(int i=0;i<nums.size(); i++){
            s.insert(nums[i]);
        }
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