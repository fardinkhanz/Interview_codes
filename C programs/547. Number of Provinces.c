void dfs(int** isConnected,int isConnectedSize,int* isConnectedColSize,int* visited,int city)
{
    visited[city]=1;
    for(int neighbor=0;neighbor<isConnectedSize;neighbor++)
    {
        if(!visited[neighbor] && isConnected[city][neighbor])
        {
            dfs(isConnected,isConnectedSize,isConnectedColSize,visited,neighbor);
        }
    }
}



int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize){
   int province=0;
   int* visited=(int*)malloc(isConnectedSize*sizeof(int));
   for(int i=0;i<isConnectedSize;i++)
   {
       visited[i]=0;
   }
   for(int city=0;city<isConnectedSize;city++)
   {
       if(!visited[city])
       {
           dfs(isConnected,isConnectedSize,isConnectedColSize,visited,city);
           province++;
       }
   }
   free(visited);
   return province;

}
