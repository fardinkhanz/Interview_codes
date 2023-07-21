#include<stdio.h>
#include<string.h>

# define max 256

int main()
{
    char str1[10],str2[10];
    int i,a1[max]={0},a2[max]={0},flag=0;
    printf("enter 1st string \n");
    scanf("%s",&str1);
    printf("enter 2nd string\n");
    scanf("%s",&str2);


    printf("The strings are %s and %s \n",str1,str2);
    int size1=0,size2=0;

     size1=strlen(str1);
    size2=strlen(str2);
    printf("%d and %d \n",size1,size2);

    if(size1!=size2)
    {
       printf("The strings ARE NOT permutation of one another");
       return 0;
    }

    for(i=0;i<size1;i++)
    {
        a1[str1[i]]++;

        a2[str2[i]]++;
    }
     for(i=0;i<size1;i++)
    {
        if(a1[str1[i]]!=a2[str2[i]])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
         printf("The strings ARE NOT permutation of one another");

    }
    else
    {
         printf("The strings ARE permutation of one another");
    }
    return 0;

}
