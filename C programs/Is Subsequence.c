bool isSubsequence(char * s, char * t){
int temp=0,sizet=strlen(t),j=0;

for(int i=0;i<sizet;i++)
{
    if(t[i]==s[j])
    {
        j++;

    }
}

int sizes=strlen(s);
if(sizes==j)
{
    return true;
}
return false;

}
