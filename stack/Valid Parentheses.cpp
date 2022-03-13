class Solution {
public:
    bool ismatching(char a,char b){
        return (a=='(' && b==')' || a=='{' && b=='}' || a=='[' && b==']');
    }
    bool isValid(string s) {
        stack<int> stk;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{')
                stk.push(s[i]);
            else{
                if(stk.empty())
                    return false;
                else if(ismatching(stk.top(),s[i])==false)
                    return false;
                else
                    stk.pop();
            }
        }
        return stk.empty()==true;
    }
};
