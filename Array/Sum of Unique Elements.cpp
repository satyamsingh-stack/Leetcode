class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int res[101]={},ans=0;
       for(auto x:nums)
           res[x]++;
        for(auto i=1;i<=100;i++){
            if(res[i]==1)
                ans=ans+i;
        }
        return ans;
    }
};
