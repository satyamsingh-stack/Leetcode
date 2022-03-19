class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> s;
        for(auto x:nums){
            s.insert(x);
        }
        vector<int> res;
        for(auto x:s)
            res.push_back(x);
        sort(res.begin(),res.end());
        if(res.size()<3)
            return res[res.size()-1];
        return res[res.size()-3];
    }
};
