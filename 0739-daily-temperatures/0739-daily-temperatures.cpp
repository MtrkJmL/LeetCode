
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size, 0);
        stack<int> s;

        for (int i = 0; i < size; i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
                int prevIndex = s.top();
                s.pop();
                answer[prevIndex] = i - prevIndex;
            }
            s.push(i);
        }

        return answer;
    }
};