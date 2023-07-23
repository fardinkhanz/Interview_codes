double knightProbability(int n, int k, int row, int column){

    int  dr[]={-2,-2,-1,-1,1,1,2,2},dc[]={-1,1,-2,2,-2,2,-1,1};

    int i,j,m;
    double d[n][n][k+1];
     for(i=0;i<n;i++)
        {  for(j=0;j<n;j++)
          {
              d[i][j][0]=1.0;
          }
        }

    for(m=1;m<=k;m++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
          {
              double moveOnboard=0.0;
              for(int move=0;move<8;move++)
          {
              int r=i+dr[move];
              int c=j+dc[move];
              if(r>=0 && r<n && c>=0 && c<n )
              moveOnboard+=d[r][c][m-1];
          }
             d[i][j][m]=moveOnboard/8.0;

          }
        }
    }
    return d[row][column][k];
}
