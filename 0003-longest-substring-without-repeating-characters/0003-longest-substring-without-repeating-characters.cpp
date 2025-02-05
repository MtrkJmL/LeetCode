class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right;
        int best = 0;
        unordered_set<char> smap;
        for(right=0; right<s.size(); right++){
            while(smap.find(s[right]) != smap.end()){
                smap.erase(s[left]);
                left++;
            }
            smap.insert(s[right]);
            best = max(best, right-left+1);
        }   
        return best;
    }
};