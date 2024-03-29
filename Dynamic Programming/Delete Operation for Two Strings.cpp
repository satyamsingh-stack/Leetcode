class Solution {
public:
    int LCS(string word1, string word2,int m,int n){
        int dp[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
        for(int i=0;i<=n;i++)
            dp[0][i]=0;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(word1[i-1]==word2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    int minDistance(string word1, string word2) {
        int ls1=word1.size();
        int ls2=word2.size();
        int ans=LCS(word1,word2,ls1,ls2);
        return ls1+ls2-2*ans;
    }
};
