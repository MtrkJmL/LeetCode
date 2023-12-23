class Solution {
public:
    int maxArea(vector<int>& height) {
        int bestArea = 0;
        int area = 0;
        int h = 0;
        int l = 0;
        int ptr1 = 0;
        int ptr2 = height.size()-1;
        
        while(ptr1<ptr2){
            l = ptr2 - ptr1;
            h = min(height[ptr1],height[ptr2]);
            area = l*h;
            if(area>bestArea)
                bestArea = area;
            if(height[ptr1]<height[ptr2])
                ptr1++;
            else
                ptr2--; 
        }
        return bestArea;
    }
};