#include<stdio.h>

int fun(int arr[],int n)
{
    int temp[100],temp1[100]={0},len=n/2,count;
    printf("%d",len);
     for(int i=0;i<n;i++)
    {
        temp[i]=arr[i];
    }
 printf("\ntemp elements:\n");
    for(int i=0;i<n;i++)
    {
       printf("%d\t",temp[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
    { count=0;
        for(int j=0;j<n;j++)
        {

            if(temp[i]==arr[j])
            {
                count++;
                temp1[i]=count;

            }
        }
        temp1[i]=count;

    }
    printf("repeats:\n");
    for(int i=0;i<n;i++)
    {
       printf("%d\t",temp1[i]);
    }
    printf("\n");
     for(int i=0;i<n;i++)
    {
      if(temp1[i]>len)
      {
          return temp[i];
      }


    }
 return -1;
}

int main()
{
    int arr[100],i,n;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("Array elements:\n");
    for(i=0;i<n;i++)
    {
       printf("%d\t",arr[i]);
    }
    int res;
    res=fun(arr,n);
    if (res!=-1)
    {
    printf("\n The number is %d ",res);
    }
    else
    {
        printf("\n The number is no such number");

    }
}
