class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        for(auto x:  s)
        {
            
            if(isalpha(x) or isdigit(x))
                ans+= tolower(x);
            
        }
        int flag=1;
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=ans[ans.size()-i-1]){
                flag=0;
                break;
            }
        }
        if(flag)
            return true;
        return false;
    }
};
