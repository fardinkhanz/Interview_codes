int lengthOfLongestSubstring(char * s){

    int i,j,n,temp=0,currentLength;
    n=strlen(s);
    int temp2[128];

    for (int i = 0; i < 128; i++) {
        temp2[i] = -1;
    }

    int result = 0;
    int start = 0;

    for (int i = 0; i < n; i++) {
        if (temp2[s[i]] >= start) {
            start = temp2[s[i]] + 1;
        }
        temp2[s[i]] = i;
        int currentLength = i - start + 1;
        if (currentLength > result) {
            result = currentLength;
        }
    }


return result;

}
