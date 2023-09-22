int longestCommonSubsequence(char * text1, char * text2){
    int m=strlen(text1),n=strlen(text2),dp[m+1][n+1];
     for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
         {
             dp[i][j]=0;
         }

    }
    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
         {
             if(text1[i]==text2[j])
             {
                 dp[i+1][j+1]=1+dp[i][j];
             }
             else
             {
                 dp[i+1][j+1]=(dp[i+1][j]>dp[i][j+1])?dp[i+1][j]:dp[i][j+1];
             }
         }

    }
    return dp[m][n];


}
