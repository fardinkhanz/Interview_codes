
bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int maxVowels(char *s, int k) {
    int max_vowels = 0;
    int vowel_count = 0;


    for (int i = 0; i < k; i++) {
        if (isVowel(s[i])) {
            vowel_count++;
        }
    }

    max_vowels = vowel_count;


    for (int i = k; s[i] != '\0'; i++) {
        if (isVowel(s[i - k])) {
            vowel_count--;
        }
        if (isVowel(s[i])) {
            vowel_count++;
        }
        max_vowels = (vowel_count > max_vowels) ? vowel_count : max_vowels;
    }

    return max_vowels;
}
