
#define ALPHABET_SIZE 26

struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    char* word;
};

struct TrieNode* createNode() {
    struct TrieNode* newNode = (struct TrieNode*)malloc(sizeof(struct TrieNode));
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        newNode->children[i] = NULL;
    }
    newNode->word = NULL;
    return newNode;
}

void insert(struct TrieNode* root, const char* word) {
    struct TrieNode* node = root;
    for (int i = 0; word[i] != '\0'; i++) {
        int index = word[i] - 'a';
        if (node->children[index] == NULL) {
            node->children[index] = createNode();
        }
        node = node->children[index];
    }
    node->word = strdup(word);
}

void dfs(struct TrieNode* node, char* res[], int* resLen) {
    if (*resLen == 3 || node == NULL) {
        return;
    }
    if (node->word) {
        res[(*resLen)++] = strdup(node->word);
    }
    for (char c = 'a'; c <= 'z'; c++) {
        int index = c - 'a';
        if (node->children[index]) {
            dfs(node->children[index], res, resLen);
        }
    }
}

char*** suggestedProducts(char** products, int productsSize, char* searchWord, int* returnSize, int** returnColumnSizes) {
    struct TrieNode* root = createNode();
    for (int i = 0; i < productsSize; i++) {
        insert(root, products[i]);
    }

    int searchWordLen = strlen(searchWord);
    char*** ans = (char***)malloc(searchWordLen * sizeof(char**));
    *returnSize = searchWordLen;
    *returnColumnSizes = (int*)malloc(searchWordLen * sizeof(int));

    struct TrieNode* node = root;
    char* prefix = (char*)malloc((searchWordLen + 1) * sizeof(char));

    for (int i = 0; i < searchWordLen; i++) {
        prefix[i] = searchWord[i];
        prefix[i + 1] = '\0';

        int index = searchWord[i] - 'a';
        if (node == NULL || node->children[index] == NULL) {
            node = NULL;
            ans[i] = (char**)malloc(0);
            (*returnColumnSizes)[i] = 0;
        } else {
            node = node->children[index];
            int resLen = 0;
            char* res[3];
            dfs(node, res, &resLen);

            ans[i] = (char**)malloc(resLen * sizeof(char*));
            (*returnColumnSizes)[i] = resLen;
            for (int j = 0; j < resLen; j++) {
                ans[i][j] = strdup(res[j]);
                free(res[j]);
            }
        }
    }

    free(prefix);
    return ans;
}
