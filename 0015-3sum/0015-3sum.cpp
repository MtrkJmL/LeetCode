class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        if(n<3)
            return result;
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(nums[i]>0)
                break;
            if(i>0 && nums[i]==nums[i-1])
                continue;
            else{
                int index1=i+1;
                int index2=nums.size()-1;
                while(index1<index2){
                if(nums[i]+nums[index1]+nums[index2]<0)
                    index1++;
                else if(nums[i]+nums[index1]+nums[index2]>0)
                    index2--;
                else{
                    result.push_back({nums[i],nums[index1],nums[index2]});
                    while(index1<index2 && nums[index1]==nums[index1+1])
                        index1++;
                    while(index1<index2 && nums[index2]==nums[index2-1])
                        index2--;
                    index1++;
                    index2--;
                    }
                }
            }
                
        }
        return result;
    }
};