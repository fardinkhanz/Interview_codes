#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("enter a and b for HCF\n");
    scanf("%d  %d",&a,&b);
    int temp;
    while(b!=0)
    {
        temp=b;
        b=a%b;
        a=temp;
    }
    printf("HCF/GCD is %d\n",temp);
 printf("enter c and d for LCM\n");
    scanf("%d  %d",&c,&d);

    int lcm, max=(c>d)? c:d;
    lcm=max;

    while(1)
    {
        if(lcm%c==0 && lcm%d==0)
            break;
        lcm+=max;
    }
printf("LCM is %d\n",lcm);
}
