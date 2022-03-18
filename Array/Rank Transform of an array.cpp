class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> s;
        for(int i=0;i<arr.size();i++)
            s.insert(arr[i]);
        map<int,int> mp;
        int rank=1;
        for(auto x:s){
            mp[x]=rank;
            rank++;
        }
        for(int i=0;i<arr.size();i++)
            arr[i]=mp[arr[i]];
        return arr;
    }
};
