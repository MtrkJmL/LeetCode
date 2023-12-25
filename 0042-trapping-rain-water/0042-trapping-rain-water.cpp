class Solution {
public:
    int trap(vector<int>& height) {
        int ptr1 = 0, ptr2 = 0, ptr3 = height.size()-1;
        bool decreasing = false;
        int h = 0, l = 0;
        int total = 0;
        
        while(ptr2<height.size()){
            if(height[ptr1]<=height[ptr2]){
                h = height[ptr1];
                l = ptr2-ptr1-1;
                total+=h*l;
                while(ptr1<ptr2){
                    ptr1++;
                    total-=height[ptr1];
                }
                total+=height[ptr2];
            }
            ptr2++;
        }
        ptr2 = ptr3;
        while(ptr1<=ptr2){
            if(height[ptr2]>=height[ptr3]){
                h = height[ptr3];
                l = ptr3-ptr2-1;
                total+=h*l;
                while(ptr2<ptr3){
                    ptr3--;
                    total-=height[ptr3];
                }
                total+=height[ptr2];
            }
            ptr2--;
        }
        return total;
    }
};