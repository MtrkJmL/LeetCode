class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hash;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]++;
        }
        
        vector<vector<int>> hashVal(nums.size()+1);
        for(auto j=hash.begin(); j!=hash.end(); j++){
            hashVal[j->second].push_back(j->first);
        }
        
        for(int i=nums.size(); i>=0;i--){
            if(!hashVal[i].empty()){
                if(result.size()>=k)
                    break;
                result.insert(result.end(),hashVal[i].begin(),hashVal[i].end());
            }
        }
        return result;
    }
};