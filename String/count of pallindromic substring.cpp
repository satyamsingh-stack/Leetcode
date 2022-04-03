class Solution {
public:
    bool ispallindromic(string st){
        for(int i=0;i<st.length();i++){
            if(st[i]!=st[st.length()-i-1])
                return false;
        }
        return true;
    }
    int countSubstrings(string s) {
        int count=0;
        for(int i=0;i<s.length();i++){
            string ss;
            for(int j=i;j<s.length();j++){
                ss=ss+s[j];
                if(ispallindromic(ss))
                    count++;
            }
        }
        return count;
    }
};
