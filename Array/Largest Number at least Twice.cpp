class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int lar=nums[0],indl=0;
        for(int i=1;i<n;i++){
            if(nums[i]>lar){
                lar=nums[i];
                indl=i;
            }
        }
        int flag=indl;
        for(int i=0;i<n;i++){
            if(lar<nums[i]*2 && nums[i]!=lar){
                return -1;
            }
        }
        return indl;
    }
};
