/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char* phone[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void backtrack(char* digits, int in, char* combination, char** result, int* returnSize) {
    if (strlen(digits) == in) {
        combination[in] = '\0';
        result[(*returnSize)++] = strdup(combination);
        return;
    }
    int digit = digits[in] - '0';
    char* letter = phone[digit];
    int len = strlen(letter);

    for (int i = 0; i < len; i++) {
        combination[in] = letter[i];
        backtrack(digits, in + 1, combination, result, returnSize);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    int n = strlen(digits);
    if (digits == NULL || n == 0) {
        *returnSize = 0;
        return NULL;
    }
    int total = 1;
    for (int i = 0; i < strlen(digits); i++) {
        int digit = digits[i] - '0';
        total *= strlen(phone[digit]);
    }
    char** result = (char**)malloc(sizeof(char*) * total);
    char combination[strlen(digits) + 1];
    *returnSize = 0;
    backtrack(digits, 0, combination, result, returnSize);

    return result;
}
