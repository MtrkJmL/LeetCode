class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        unordered_set<int>s;
        int size = numbers.size();
        for(int i=0; i<size; i++)
            s.insert(numbers[i]);
        for(int i=0; i<size; i++){
            if(s.find(target-numbers[i]) != s.end()){
                for(int j=i+1; j<size; j++){
                    if(numbers[j] == (target-numbers[i])){
                        result.push_back(i+1);
                        result.push_back(j+1);
                    }
                }
            }
                
        }
        return result;
    }
};