class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int x=original;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x){
                x=x*2;
                i=-1;
            }
        }
        return x;
    }
};
