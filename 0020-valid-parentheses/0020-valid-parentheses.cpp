class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(int i=0; i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                p.push(s[i]);
            else if(!p.empty()){
                if(s[i]==')'){
                    if(p.top()=='(')
                        p.pop();
                    else return false;
                }
                else if(s[i]==']'){
                    if(p.top()=='[')
                        p.pop();
                    else return false;
                }
                else if(s[i]=='}'){
                    if(p.top()=='{')
                        p.pop();
                    else return false;
                }
            }
            else return false;
        }
        if(p.empty())
            return true;
        else return false;
    }
};