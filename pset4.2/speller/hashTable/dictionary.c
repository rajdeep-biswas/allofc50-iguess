// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <stdlib.h>

#include "dictionary.h"

// Represents number of buckets in a hash table
#define N 26

int count = 0;

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Represents a hash table
node *hashtable[N];

// Hashes word to a number between 0 and 25, inclusive, based on its first letter
unsigned int hash(const char *word)
{
    return tolower(word[0]) - 'a';
}

// Custom function to visually produce the hash table
void showHashTable() {
    for(int i = 0; i < N; i++) {
        node *ptr = hashtable[i];

        printf("%d: ", i);
        while(ptr != NULL) {
            printf("%s - ", ptr -> word);
            ptr = ptr -> next;
        }
        printf("\n");
    }
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // Initialize hash table
    for (int i = 0; i < N; i++)
    {
        hashtable[i] = NULL;
    }

    // Open dictionary
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        unload();
        return false;
    }

    // Buffer for a word
    char word[LENGTH + 1];

    // Insert words into hash table
    while (fscanf(file, "%s", word) != EOF)
    {
        node *ptr = malloc(sizeof(node));

        strcpy(ptr -> word, word);

        ptr -> next = hashtable[hash(word)];
        hashtable[hash(word)] = ptr;

        count++;
    }

//    showHashTable();

    // Close dictionary
    fclose(file);

    // Indicate success
    return true;
}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    return count;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    node *ptr = hashtable[hash(word)];

    while(ptr != NULL) {
        if(strcasecmp(word, ptr -> word) == 0)
            return true;
        ptr = ptr -> next;
    }

    return false;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    for(int i = 0; i < N; i++) {
        node *cur = hashtable[i];

        while(cur != NULL) {
            node *temp = cur;
            cur = cur -> next;
            free(temp);
        }
    }
    return true;
}
