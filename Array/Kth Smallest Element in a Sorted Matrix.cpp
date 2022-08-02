class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int low=matrix[0][0];
        int n=matrix.size();
        int high=matrix[n-1][n-1];
        int mid,temp;
        while(low<high){
            mid=(low+high)>>1;
            temp=n-1;
            int count=0;
            for(int i=0;i<n;i++){
                while(temp>=0 && matrix[i][temp]>mid)
                    temp--;
                count=count+temp+1;
            }
            if(count<k)
                low=mid+1;
            else
                high=mid;
        }
        return low;
    }
};
