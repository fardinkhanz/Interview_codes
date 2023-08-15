char *removeStars(char *s) {
    int stack[strlen(s)+1];
    char result[strlen(s)+1];
    int top = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '*') {
            if (top > 0) {
                result[top]='\0';
                top--;
            }
        } else {


            result[top] = s[i];
            top++;

        }
    }
    result[top]='\0';

    char* fres=(char*)malloc((strlen(result)+1)*sizeof(char));

    strcpy(fres,result);
    return fres;


}
