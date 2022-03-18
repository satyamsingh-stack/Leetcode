class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int arr[n+1];
        arr[0]=0;
        for(int i=0;i<n;i++)
            arr[i+1]=arr[i]+gain[i];
        int lar=arr[0];
        for(int i=0;i<n+1;i++){
            if(arr[i]>lar)
                lar=arr[i];
        }
        return lar;
    }
};
