int equalPairs(int** grid, int gridSize, int* gridColSize){
int i,j,k,t=0,count=0,ans=0;
for(t=0;t< *gridColSize;t++)
{
for(i=0;i< *gridColSize;i++)
{
   count=1;
    for(j=0;j< *gridColSize;j++)
    {
        if(grid[j][t]!=grid[i][j])
        {
            count=0;
            break;
        }
    }
    if(count)
    {
        ans++;
    }
}

}
return ans;
}
