class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        for(auto x:s)
            mp[x]++;
        priority_queue<pair<int,char>> q;
        for(auto [a,frq]: mp)
            q.push({frq,a});
        pair<int,char> curr;
        string ans="";
        while(q.empty()==false){
            curr=q.top();
            q.pop();
            ans=ans+string(curr.first,curr.second);
        }
        return ans;
    }
};
