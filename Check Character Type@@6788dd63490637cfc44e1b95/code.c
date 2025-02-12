#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input character
    scanf("%c", &ch);

    // Check if the character is a digit
    if (isdigit(ch)) {
        printf("The character is a Digit.\n");
    }
    // Check if the character is a letter
    else if (isalpha(ch)) {
        // Convert to lowercase for easy comparison
        char lowerCh = tolower(ch);

        // Check for vowels
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    } 
    else {
        printf("Special character\n");
    }

    return 0;
}
