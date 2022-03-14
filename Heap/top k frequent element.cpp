class Solution {
public:
    struct comparator{
        bool operator()(pair<int,int> &a,pair<int,int> &b){
            return a.second>b.second;
        }   
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto x:nums)
            map[x]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,comparator> minheap;
        for(auto pair:map){
            minheap.push(pair);
            if(minheap.size()>k)
                minheap.pop();
        }
        vector<int> ans;
        while(minheap.empty()==false){
            ans.push_back(minheap.top().first);
            minheap.pop();
        }
        return ans;
    }
};
