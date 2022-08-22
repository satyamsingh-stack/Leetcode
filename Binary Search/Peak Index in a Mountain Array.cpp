//Time Comp: O(log n)
//Space Comp: O(1)

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(arr[mid]>arr[mid-1] && arr[mid]> arr[mid+1])
                return mid;
            else if(arr[mid]<arr[mid-1])
                high=mid;
            else
                low=mid;
        }
        return -1;
    }
};
