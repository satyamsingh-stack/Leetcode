class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool flag=false;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target)
                flag=true;
        }
        return flag;
    }
};
