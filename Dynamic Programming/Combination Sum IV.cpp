class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned int> t(target+1,0);
        t[0]=1;
        for(int i=1;i<=target;i++){
            for(auto x:nums){
                if(x<=i)
                    t[i]=t[i]+t[i-x];
            }
        }
        return t[target];
    }
};
