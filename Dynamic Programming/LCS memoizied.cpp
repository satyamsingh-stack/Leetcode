class Solution {
public:
    int dp[1000][1000];
    int solution(string text1,string text2,int n,int m){
        if(n==0 || m==0)
            return 0;
        if(dp[n][m]!=-1)
            return dp[n][m];
        if(text1[n-1]==text2[m-1])
            return dp[n][m]=1+solution(text1,text2,n-1,m-1);
        else
            return dp[n][m]=max(solution(text1,text2,n-1,m),solution(text1,text2,n,m-1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        int n=text1.size();
        int m=text2.size();
        return solution(text1,text2,n,m);
    }
};
