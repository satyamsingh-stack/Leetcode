class Solution {
public:
    int bsf(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        if(low==nums.size() || nums[low]!=target)   return -1;
        return low;
    }
    int bsl(vector<int>& nums,int target){
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        if(high<0 || nums[high]!=target) return -1;
        return high;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        ans[0]=bsf(nums,target);
        ans[1]=bsl(nums,target);
        return ans;
    }
};
