#include<stdio.h>

int main()
{
    int i,a[100],n;
    printf("Enter the size of array \n");
    scanf("%d",&n);
     printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is \n");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    int temp,j,scnd=-3;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
         {
             if(a[i]<=a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
             }
         }

    }
     printf("\n Array after sorting is \n");
     for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }


    if (n < 2) {
        printf("\nNo second largest element present.\n");
    } else {
        scnd = a[1];
        printf("\nSecond largest number is %d\n", scnd);
    }


}
