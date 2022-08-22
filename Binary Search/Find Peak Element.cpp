//Time Comp: O(log n)
//Space Comp: O(1)


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        if(nums[0] > nums[1]) return 0;
        if(nums[nums.size()-1] > nums[nums.size()-2]) return nums.size() - 1;
        int low = 0, high = nums.size()-1;
        
        while(low <= high)
        {
            int mid = (low+high)>>1;
            if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) 
                return mid;
			
            else if(nums[mid] < nums[mid + 1]) 
                low = mid + 1;
            else 
                high = mid - 1;
        }
		
        return 0;
    }
};
