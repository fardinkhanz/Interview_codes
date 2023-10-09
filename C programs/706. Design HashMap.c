#define HASH_TABLE_SIZE 1000


struct KeyValue {
    int key;
    int value;
    struct KeyValue* next;
};

typedef struct {
    struct KeyValue* table[HASH_TABLE_SIZE];
} MyHashMap;


int hash(int key) {
    return key % HASH_TABLE_SIZE;
}


MyHashMap* myHashMapCreate() {
    MyHashMap* hashMap = (MyHashMap*)malloc(sizeof(MyHashMap));
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        hashMap->table[i] = NULL;
    }
    return hashMap;
}


void myHashMapPut(MyHashMap* obj, int key, int value) {
    int index = hash(key);

    struct KeyValue* newNode = (struct KeyValue*)malloc(sizeof(struct KeyValue));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;


    if (obj->table[index] == NULL) {
        obj->table[index] = newNode;
    } else {
        struct KeyValue* current = obj->table[index];
        while (current->next != NULL) {
            if (current->key == key) {
                current->value = value;
                free(newNode);
                return;
            }
            current = current->next;
        }
        if (current->key == key) {
            current->value = value;
            free(newNode);
        } else {
            current->next = newNode;
        }
    }
}

int myHashMapGet(MyHashMap* obj, int key) {
    int index = hash(key);
    struct KeyValue* current = obj->table[index];

    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }


    return -1;
}


void myHashMapRemove(MyHashMap* obj, int key) {
    int index = hash(key);
    struct KeyValue* current = obj->table[index];
    struct KeyValue* prev = NULL;

    while (current != NULL) {
        if (current->key == key) {
            if (prev != NULL) {
                prev->next = current->next;
            } else {
                obj->table[index] = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

void myHashMapFree(MyHashMap* obj) {
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        struct KeyValue* current = obj->table[i];
        while (current != NULL) {
            struct KeyValue* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(obj);
}
/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);

 * int param_2 = myHashMapGet(obj, key);

 * myHashMapRemove(obj, key);

 * myHashMapFree(obj);
*/
