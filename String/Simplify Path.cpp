class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        istringstream my_stream(path);
        string s;
        while(getline(my_stream,s,'/')){
            if(s==".."){
                if(!st.empty())
                    st.pop();
            }
            else if(s.size()>0 && s!=".")
                st.push(s);
        }
        string ret;
        while(!st.empty()){
            ret="/"+st.top()+ret;
            st.pop();
        }
        return ret.empty()? "/":ret;
    }
};
