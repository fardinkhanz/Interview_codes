/* Given an unsorted array A of size N that contains only positive integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.*/
#include<stdio.h>
#include<stdlib.h>
int* ans(int arr[],int n,int s)
{
    int r=0,l=0,temp=0;
   int* te =(int*)malloc(2 * sizeof(int));
    while(r<n)
    {
        temp+=arr[r];

    while(temp>s)
    {
        temp-=arr[l];
        l++;

    }
    if(s==temp)
    {
        te[0]=l+1;
        te[1]=r+1;
        return te;
    }
    r++;
}
te[0]=-1;
return te;
}


int main()
{
    int n,s,i;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum s \n");
      scanf("%d",&s);

    int* res=ans(arr,n,s);
       if (res[0] == -1) {
        printf("No subarray found with the given sum.\n");
    } else {
        printf("Subarray with sum %d found from index %d to %d.\n", s, res[0], res[1]);
    }

    // Free dynamically allocated memory
    free(res);
}


