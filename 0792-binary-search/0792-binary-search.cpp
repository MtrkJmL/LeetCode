class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int p;
        while(l <= r){
            p = l + (r-l)/2;
            if(nums[p]>target)
                r=p-1;
            if(nums[p]<target)
                l=p+1;
            if(nums[p]==target)
                return p;
            
        }
        return -1;
    }
};