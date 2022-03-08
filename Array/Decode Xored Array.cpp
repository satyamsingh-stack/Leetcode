class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v={first};
        for(auto a: encoded){
            v.push_back(first=first^a);
        }
        return v;
    }
};
