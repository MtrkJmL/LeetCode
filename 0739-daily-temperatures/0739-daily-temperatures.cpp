
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> answer(size, 0);
        stack<int> st;

        for (int i = 0; i < size; i++) {
            while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
                int prevIndex = st.top();
                st.pop();
                answer[prevIndex] = i - prevIndex;
            }
            st.push(i);
        }

        return answer;
    }
};