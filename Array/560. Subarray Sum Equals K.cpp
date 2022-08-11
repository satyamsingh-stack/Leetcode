class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int> mp;
        for(auto x:nums){
            sum+=x;
            if(sum==k)
                count++;
            if(mp.find(sum-k)!=mp.end())
                count+=mp[sum-k];
            mp[sum]++;
        }
        return count;
    }
};
