//Time Comp: O(n*m)
//Space Comp: O(1)
class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<m-1;j++){
                if(matrix[i+1][j+1]!=matrix[i][j])return 0;
            }
        }
        return 1;
    }
};
