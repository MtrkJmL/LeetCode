class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(), nums.end());
        int longest = 0;
        for(auto n=s.begin(); n!=s.end(); n++){
            int i = *n;
            if(!s.count(i-1)){
                int streak = 1;
                while(s.count(i+streak)){
                    streak++;
                }
                longest = max(streak,longest);
            }
            
        }
        return longest;
    }
};