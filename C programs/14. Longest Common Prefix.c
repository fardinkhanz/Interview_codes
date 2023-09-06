char * longestCommonPrefix(char ** strs, int strsSize){
    if(!strsSize)
    {
        return "";
    }

    char* result=strs[0];
    int i,j;
    for(i=0;i<strsSize;i++)
    {
        j=0;
        while(strs[i][j]!='\0' && result[j]!='\0' && strs[i][j]==result[j])
        {
            j++;
        }
        result[j++]='\0';
    }

    return result;


}
