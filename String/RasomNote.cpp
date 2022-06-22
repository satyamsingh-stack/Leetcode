class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;
        for(auto x: magazine)
            mp[x]++;
        for(auto x: ransomNote){
            mp[x]--;
            if(mp[x]<0)
                return false;
        }
        return true;
    }
};
