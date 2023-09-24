/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize)
{
    int* arr=(int*)malloc((n+1)*sizeof(int));
    arr[0]=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]= arr[i>>1] + (i&1);
    }
    *returnSize=n+1;
    return arr;

}
