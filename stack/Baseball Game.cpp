class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        int a,b,su=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C")
                s.pop();
            else if(ops[i]=="D")
                s.push(s.top()*2);
            else if(ops[i]=="+"){
                a=s.top();
                s.pop();
                b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else
                s.push(stoi(ops[i]));
        }
        while(s.empty()==false){
            su=su+s.top();
            s.pop();
        }
        return su;
    }
};
