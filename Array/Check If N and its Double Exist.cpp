class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        bool flag=false;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]==2*arr[j] and i!=j)
                    flag=true;
            }
        }
        return flag;
    }
};
