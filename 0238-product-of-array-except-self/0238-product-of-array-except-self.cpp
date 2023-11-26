class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        unordered_map<int,int> map;
        int n= nums.size();
        vector<int> answer(n,1);
        for(int i=0; i<n; i++){
            map[nums[i]]++;
        }
        for(int i=0; i<n; i++){
            int prod = 1;
            for(auto j=map.begin(); j!=map.end();j++){
                if(nums[i]==j->first)
                    prod*=pow(j->first,j->second-1);
                else
                    prod*=pow(j->first,j->second);
            }
            answer[i]=prod;
        }
        return answer;
    }
};