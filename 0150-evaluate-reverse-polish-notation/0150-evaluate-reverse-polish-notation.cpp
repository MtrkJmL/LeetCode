class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int num1, num2;
        stack<int> nums;
        if(tokens.size()==1)
            return stoi(tokens[0]);
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                num1 = nums.top();
                nums.pop();
                num2 = nums.top();
                nums.pop();
                if(tokens[i] == "+")
                    num1 = num1 + num2;
                if(tokens[i] == "-")
                    num1 = num2 - num1;
                if(tokens[i] == "*")
                    num1 = num1 * num2;
                if(tokens[i] == "/")
                    num1 = num2 / num1;
                nums.push(num1);
            }
            else
                nums.push(stoi(tokens[i]));
        }
        return num1;
    }
};