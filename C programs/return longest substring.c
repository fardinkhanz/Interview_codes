char* longestsub(char* s)
{

    int n=strlen(s),i,start=0,result=0,lstart;
    int temp[128];
    for(i=0;i<128;i++)
    {
        temp[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        if(temp[s[i]]>=start)
        {
            start=temp[s[i]]+1;

        }
        temp[s[i]]=i;
        int cur=i-start+1;
        if(cur>result)
        {

            result=cur;
            lstart=start;
        }

    }

    char* ans=malloc(result+1);
    strncpy(ans,s+lstart,result);
    ans[result]='\0';
    return ans;


}


int main()
{

    char s[]="abcabcabc";
    char* ans=longestsub(s);

    printf("The substring is: %s",ans);
    free(ans);
    return 0;
}
