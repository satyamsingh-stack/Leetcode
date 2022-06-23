class Solution {
public:
    string toLowerCase(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            int ch=int(s[i]);
            if(ch>64 && ch<91){
                ans=ans+char(ch+32);
            }
            else
                ans=ans+char(ch);
        }
        return ans;
        
    }
};
