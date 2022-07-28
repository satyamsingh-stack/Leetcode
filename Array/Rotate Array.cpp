class Solution {
public:
    void reverse(vector<int> &arr,int beg,int end){
        while(beg<=end){
            swap(arr[beg],arr[end]);
            beg++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }
};
