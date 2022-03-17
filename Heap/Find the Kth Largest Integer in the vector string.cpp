class Solution {
public:
    struct cmp{
      bool operator()(string &a,string &b){
          return a.length()>b.length() || (a.length()==b.length() && a>b);
      }  
    };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,cmp> minheap;
        for(int i=0;i<nums.size();i++)
            minheap.push(nums[i]);
        while(minheap.size()>k)
            minheap.pop();
        return minheap.top();
    }
};
