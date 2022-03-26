class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0,end=nums.size()-1;
        while(beg<=end){
            int mid=(beg+end)/2;
            if(target>nums[mid])
                beg=mid+1;
            else if(target<nums[mid])
                end=mid-1;
            else
                return mid;
        }
        return -1;
    }
};
