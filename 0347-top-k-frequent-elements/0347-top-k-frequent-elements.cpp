class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>s;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            s[nums[i]]++;
        }
        vector<vector<int>> hash(nums.size()+1);
        for(auto j=s.begin(); j!=s.end();j++){
            hash[j->second].push_back(j->first);
        }
        
        for(int i=nums.size();i>=0;i--){
            if(res.size()>=k)
                break;
            if(!hash[i].empty()){
                res.insert(res.end(),hash[i].begin(),hash[i].end());
            }
        }
        return res;
    }
};