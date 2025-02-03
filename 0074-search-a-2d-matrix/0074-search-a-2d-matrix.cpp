class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int u=0,d=matrix.size()-1,l=0,r=matrix[0].size()-1;
        int pV,pH;
        while(u <= d){
            pV = u + (d-u)/2;
            if( target < matrix[pV][0])
                d = pV-1;
            else if( target > matrix[pV].back())
                u = pV+1;
            else
                break;
        }
        while( l <= r){
            pH = l+ (r-l)/2;
            if(target < matrix[pV][pH])
                r = pH-1;
            if(target > matrix[pV][pH])
                l = pH+1;
            if(target == matrix[pV][pH])
                return true;
        }
        return false;
    }
};