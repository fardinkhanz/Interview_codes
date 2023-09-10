bool isIsomorphic(char * s, char * t){

    int n=strlen(s);
   int StoT[256]={0},TtoS[256]={0};

   for(int i=0;i<n;i++)
   {
       if( StoT[s[i]]==0 && TtoS[t[i]]==0)
       {
           StoT[s[i]]=t[i];
           TtoS[t[i]]=s[i];
       }
       else
       {
           if(StoT[s[i]]!=t[i] || TtoS[t[i]]!=s[i])
           {
               return false;
           }
       }
   }
return true;
}
