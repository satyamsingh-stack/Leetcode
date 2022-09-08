//Time Comp: O(n)
//Space Comp: O(n)

class Solution {
public:
    int solution(vector<int> &nums,int n,int s){
        int pre_sum=0,res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            pre_sum+=nums[i];
            if(mp.find(pre_sum-s)!=mp.end())
                res=max(res,i-mp[pre_sum-s]);
            if(mp.find(pre_sum-s)==mp.end())
                mp.insert({pre_sum,i});
            if(pre_sum==s)
                res=i+1;
        }
        return res;
    }
    int findMaxLength(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                nums[i]=-1;
        }
        return solution(nums,nums.size(),0);
    }
};
