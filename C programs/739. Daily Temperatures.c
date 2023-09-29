/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize){
    int* res=(int*)malloc(sizeof(int)*temperaturesSize);
    *returnSize=temperaturesSize;
    int stack[temperaturesSize];
    int top=-1;
    for(int i=0;i<temperaturesSize;i++)
    {
        res[i]=0;
    }

    for(int i = 0; i < temperaturesSize; i++)
    {
        while(top>=0 && temperatures[i] > temperatures[stack[top]] ){
            int pre=stack[top--];
            res[pre]=i-pre;
        }
        stack[++top]=i;
    }

    return res;

}
