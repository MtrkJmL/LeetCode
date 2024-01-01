class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size, 0);
        stack<pair<int, int>> nums;

        for (int i = 0; i < size; i++) {
            while (!nums.empty() && nums.top().first < temperatures[i]) {
                auto [temp, index] = nums.top();
                nums.pop();
                answer[index] = i - index;
            }
            nums.push({temperatures[i], i});
        }

        return answer;
    }
};