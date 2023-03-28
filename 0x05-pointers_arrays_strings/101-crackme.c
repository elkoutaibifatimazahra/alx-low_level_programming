#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8
#define VALID_CHARACTERS "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random password
    char password[PASSWORD_LENGTH + 1];
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = VALID_CHARACTERS[rand() % (sizeof(VALID_CHARACTERS) - 1)];
    }
    password[PASSWORD_LENGTH] = '\0';

    // Print the password
    printf("%s\n", password);

    return 0;
}

