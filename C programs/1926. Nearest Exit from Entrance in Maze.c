typedef struct
{
    int row;
    int col;
    int step;
}cell;

int nearestExit(char **maze, int mazeSize, int *mazeColSize, int *entrance, int entranceSize) {
    int m = mazeSize;
    int n = mazeColSize[0];

    cell que[m * n];
    int front=0, rear=0;
    int direction[4][2]={{1,0},{-1,0},{0,1},{0,-1}};



    bool visited[m][n];
    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
         {
             visited[i][j]=false;
         }

    }
    que[rear++]=(cell){entrance[0],entrance[1],0};
    visited[entrance[0]][entrance[1]]=true;

    while(front<rear)
    {
        cell current = que[front++];

        if((current.row != entrance[0] || current.col != entrance[1]) && (current.row == m-1 || current.col == n-1 || current.row == 0 || current.col == 0))
        {
            return current.step;
        }

        for(int i=0;i<4;i++)
        {
            int newrow = current.row + direction[i][0];
            int newcol = current.col + direction[i][1];

            if(newrow>=0 && newcol>=0 && newrow<m && newcol<n && !visited[newrow][newcol] && maze[newrow][newcol]=='.')
            {
                que[rear++]=(cell){ newrow, newcol, current.step + 1 };
                visited[newrow][newcol]=true;
            }
        }


    }

return -1;


}
