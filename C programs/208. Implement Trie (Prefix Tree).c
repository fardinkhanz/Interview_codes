typedef struct TrieNode{
    struct TrieNode* children[26];
    bool isWord;
}TrieNode;


typedef struct {
    TrieNode* root;

} Trie;

TrieNode* createTrieNode(){
    TrieNode* newNode =(TrieNode*)malloc(sizeof(TrieNode));
    if(newNode){
        newNode->isWord=false;
        for(int i=0;i<26;i++)
        {
            newNode->children[i]=NULL;
        }

    }
     return newNode;
}

Trie* trieCreate() {
    Trie* newTrie = (Trie*)malloc(sizeof(Trie));
    if(newTrie){
        newTrie->root=createTrieNode();
    }
    return newTrie;

}

void trieInsert(Trie* obj, char * word) {
    TrieNode* node=obj->root;
    while(*word){
        int index = *word -'a';
        if(!node->children[index]){
            node->children[index] = createTrieNode();
        }
        node = node->children[index];
        word++;
    }
    node->isWord=true;

}

bool trieSearch(Trie* obj, char * word) {
    TrieNode* node =obj->root;
    while(*word)
    {
        int index=*word - 'a';
        if(!node->children[index]){
            return false;
        }
        node = node->children[index];
        word++;
    }
    return node && node ->isWord;

}

bool trieStartsWith(Trie* obj, char * prefix) {
    TrieNode* node =obj->root;
  while(*prefix)
    {
        int index=*prefix - 'a';
        if(!node->children[index]){
            return false;
        }
        node = node->children[index];
        prefix++;
    }
    return true;
}
void freeTrieNode(TrieNode* node)
{
    if(node){
        for(int i=0;i<26;i++){
            freeTrieNode(node->children[i]);
        }
        free(node);
    }
}

void trieFree(Trie* obj) {
    if(obj){
        freeTrieNode(obj->root);
        free(obj);
    }

}

/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);

 * bool param_2 = trieSearch(obj, word);

 * bool param_3 = trieStartsWith(obj, prefix);

 * trieFree(obj);
*/
