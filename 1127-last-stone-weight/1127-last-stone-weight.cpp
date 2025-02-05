class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> heap;
        int big,small,diff;
        for(int i=0;i<stones.size();i++)
            heap.push(stones[i]);
        while(heap.size()>=2){
            big = heap.top();
            heap.pop();
            small = heap.top();
            heap.pop();
            diff=big-small;
            if(diff>0)
                heap.push(diff);
        }
        if(heap.size()==1)
            return heap.top();
        return 0;
    }
};