//Time Comp: O(N)
//Space Comp: O(N)

class Solution {
public:
    int rob(vector<int>& arr) {
        int n=arr.size();
        if(n==1)
            return arr[0];
        vector<long long int> a(n,-1);
        a[0]=arr[0];
        if(n>1) {
           a[1]=arr[1];
        }
        long long int m=max(a[0],a[1]);
        for(int i=2; i<n; i++) {
           a[i]=max(arr[i]+a[i-2],(a[i-1]-arr[i-1])+arr[i]);
           m=max(m,a[i]);
        }
        return m;
    }
};
