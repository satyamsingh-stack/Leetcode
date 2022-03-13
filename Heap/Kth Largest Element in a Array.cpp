// Given an integer array nums and an integer k, return the kth largest element in the array.

// Note that it is the kth largest element in the sorted order, not the kth distinct element.

 

// Example 1:

// Input: nums = [3,2,1,5,6,4], k = 2
// Output: 5
// Example 2:

// Input: nums = [3,2,3,1,2,4,5,5,6], k = 4
// Output: 4


class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> minheap;
        for(int i=0;i<k;i++)
            minheap.push(nums[i]);
        for(int i=k;i<nums.size();i++){
            if(minheap.top()>nums[i])
                continue;
            else{
                minheap.pop();
                minheap.push(nums[i]);
            }
        }
        return minheap.top();
    }
};
