/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
bool* result=(bool*)malloc(candiesSize * sizeof(bool));
int high=candies[0];
for(int i=1;i<candiesSize;i++)
{
    if(high<=candies[i])
    {
        high=candies[i];
    }

}
int temp=0;
for(int i=0;i<candiesSize;i++)
{
    temp=0;
    temp=candies[i]+extraCandies;
    if(high<=temp)
    {
        result[i]=true;
    }
    else
    {
        result[i]=false;
    }

}
  *returnSize = candiesSize;
return result;


}
