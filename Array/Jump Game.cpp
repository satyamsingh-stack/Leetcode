//Time Comp: O(N)

class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums[0]==0 && nums.size()==1)
            return true;
        for(int i=0,step=nums[0];i<nums.size();i++){
            step--;
            if(step<0)
                return false;
            else
                step=max(step,nums[i]);
        }
        return true;
    }
};
