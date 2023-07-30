char isvowel(char c)
{
    char vowels[]="aeiouAEIOU";
      for (int i = 0; i < strlen(vowels); i++) {
        if (c == vowels[i]) {
            return true;
        }
    }
    return false;
}



char * reverseVowels(char * s){
  int left=0,right=strlen(s)-1;

  while(left<right)
  {
      if(isvowel(s[left]) && isvowel(s[right]))
      {
          char temp=s[left];
          s[left]=s[right];
          s[right]=temp;
          right--;
          left++;
      }
      else
      {
          if(!isvowel(s[left]))
          {
              left++;
          }
          if(!isvowel(s[right]))
          {
              right--;

          }
      }
  }

return s;
}
