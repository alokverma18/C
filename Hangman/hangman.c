#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_TRIES 6
#define WORD_COUNT 100

// List of words for the game
const char* words[WORD_COUNT] = {
        "virat", "rohit", "steve", "kane", "david", "joe", "babar", "ben", "mohammad", "kumar", "jasprit", "jofra", "mitchell", "marnus", "shakib", "quinton", 
        "chris", "kieron", "nicholas", "babar", "imad", "hashim", "tom", "rashid", "adil", "anderson", "tim", "ross", "martin", "colin", "darren", "travis",
        "marcus", "matt", "kusal", "kusal", "tamim", "mushfiqur", "mehidy", "mushfiq", "sabbir", "tamim", "kane", "kane", "ross", "tim", "martin", "kane", "trent", 
        "james", "kane", "ross", "lockie", "trent", "kane", "mitchell", "tom", "ross", "matt", "tim", "ben", "david", "joe", "kumar", "jasprit", "babar", "mohammad",
        "imad", "shakib", "tamim", "mushfiqur", "mehidy", "quinton", "babar", "fakhar", "shaheen",
        "david", "steve", "marnus", "mitchell", "kane", "ross", "martin", "tim", "ben", "jasprit", "jofra", "james", "chris"
};

int main() {
    srand(time(0));
    // Select a random word from the list
    const char* word = words[rand() % WORD_COUNT];
    int wordLength = strlen(word);
    
    char guessedWord[wordLength];
    for (int i = 0; i < wordLength; i++) {
        guessedWord[i] = '_';
    }
    
    int tries = 0;
    printf("Welcome to Hangman!\n You have to Guess the Cricketer's first Name: \n");
    
    while (tries < MAX_TRIES) {
        printf("\nCurrent word: ");
        for (int i = 0; i < wordLength; i++) {
            printf("%c ", guessedWord[i]);
        }
        char guess;
        printf("\nEnter a letter: ");
        scanf(" %c", &guess);
        
        int found = 0;
        for (int i = 0; i < wordLength; i++) {
            if (word[i] == guess) {
                guessedWord[i] = guess;
                found = 1;
            }
        }
        if (!found) {
            tries++;
            printf("Incorrect guess. Tries remaining: %d\n", MAX_TRIES - tries);
        }
        int correct = 1;
        for (int i = 0; i < wordLength; i++) {
            if (guessedWord[i] == '_') {
                correct = 0;
                break;
            }
        }
        if (correct) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            break;
        }
    }
    if (tries == MAX_TRIES) {
        printf("\nYou've run out of tries. The word was: %s\n", word);
    }
    return 0;
}