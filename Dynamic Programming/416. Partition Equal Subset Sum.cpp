class Solution {
public:
    bool subset_sum(vector<int> &nums,int sum,int n){
        int t[n+1][sum+1];
        for(int i=0;i<=n;i++)
            t[i][0]=true;
        for(int i=1;i<=sum;i++)
            t[0][i]=false;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1]<=j)
                    t[i][j]=t[i-1][j-nums[i-1]]||t[i-1][j];
                else if(nums[i-1]>j)
                    t[i][j]=t[i-1][j];
            }
        }
        return t[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int s=0,n=nums.size();
        for(int i=0;i<n;i++)
            s=s+nums[i];
        if(s%2!=0)
            return false;
        else
            return subset_sum(nums,s/2,n);
    }
};
