bool closeStrings(char *word1, char *word2) {
    int a[26] = {0};
    int b[26] = {0};

    for (int i = 0; word1[i] != '\0'; ++i) {
        ++a[word1[i] - 'a'];
    }

    for (int i = 0; word2[i] != '\0'; ++i) {
        ++b[word2[i] - 'a'];
    }

    for (int i = 0; i < 26; ++i) {
        if ((!a[i] && b[i]) || (a[i] && !b[i])) {
            return false;
        }
    }


    for (int i = 0; i < 26; ++i) {
        for (int j = i + 1; j < 26; ++j) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    for (int i = 0; i < 26; ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}
