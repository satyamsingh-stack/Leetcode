//Time Comp: O(n)
//Space Comp: O(n)


class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int> mp;
        int res=0;
        for(int i=0;i<time.size();i++){
            time[i]=time[i]%60;
            int dummy=time[i]==0?60:time[i];
            if(mp.find(60-dummy)!=mp.end())
                res+=mp[60-dummy];
            mp[time[i]]++;
        }
        return res;
    }
};
