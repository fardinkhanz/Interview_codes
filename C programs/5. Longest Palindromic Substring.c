int check(char* s,int left,int right)
{
    int len=strlen(s);
    while(left>=0 && right<len && s[left]==s[right])
    {
        left--;
        right++;
    }
    return right-left-1;

}




char * longestPalindrome(char * s){

    int n=strlen(s),start=0,end=0;

    for(int i=0;i<n;i++)
    {
        int len1=check(s,i,i);
        int len2=check(s,i,i+1);
        int max=(len1>len2)? len1:len2;

        if(max>end-start)
        {
            start=i-(max-1)/2;
            end=i+(max/2);
        }
    }

    char* ans=(char*)malloc((end-start+2)*sizeof(char));
    strncpy(ans,s+start,end-start+1);
    ans[end-start+1]='\0';

    return ans;


}
