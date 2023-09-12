bool canConstruct(char * s, int k){
    int n=strlen(s);
    if(k>n)
    {
        return false;
    }

    int i,arr[26]={0},c=0;
    for(i=0;s[i]!='\0';i++)
    {
        arr[s[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]%2==1)
        {
            c++;
        }
    }

    return c<=k && k<=n;

}
