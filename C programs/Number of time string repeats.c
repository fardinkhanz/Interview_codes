#include<stdio.h>
#include<string.h>


int check(char* s,char* s1)
{
    int n=strlen(s),m=strlen(s1),i=0,j=0,count=0,count1=0;
    while(s[i]!='\0')
    {
        if(s[i]==s1[j])
        {
            count++;
            if(count==m)
            {
                count1++;
            }
            j++;
        }
        else{
            j=0;
            count=0;
        }
        i++;

    }
    return count1;
}
int main()
{

    char* s="hellothisishelothisisrthisis";
    char* s1="thisis";
    int n=check(s,s1);
    printf("the answer is %d",n);
    return 0;

}
