/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

 void backtrack(int start,int k,int n,int *current_cm,int **valid_cm,int *count,int max){
     if(k==0 && n==0){
         valid_cm[*count]=(int*)malloc(max*sizeof(int));
         for(int i=0;i<max;i++)
         {
             valid_cm[*count][i]=current_cm[i];
         }
         (*count)++;
         return;
     }
     if(k==0||n<0){
         return;
     }

     for(int i=start; i<=9;i++){
         current_cm[max-k]=i;
         backtrack(i+1,k-1,n-i,current_cm,valid_cm,count,max);
     }

 }

int** combinationSum3(int k, int n, int* returnSize, int** returnColumnSizes){

    int max=1000;
    int **valid_cm=(int**)malloc(max*sizeof(int*));
    *returnSize=0;
    *returnColumnSizes =(int*)malloc(max*sizeof(int));

    int *current_cm=(int*)malloc(k*sizeof(int));

    backtrack(1,k,n,current_cm,valid_cm,returnSize,k);
    valid_cm=(int**)realloc(valid_cm,(*returnSize)*sizeof(int*));
    for(int i=0;i<*returnSize;i++){
        (*returnColumnSizes)[i]=k;
    }
    free(current_cm);
    return valid_cm;
}
