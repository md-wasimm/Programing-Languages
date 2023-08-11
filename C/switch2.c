#include <stdio.h>

int main(){

    char character;
    printf("Eneter the Alphabet: ");
    scanf("%c", &character);

    switch (character)
    {
    case 'a':
        printf("This is Vowel");
        break;
    case 'e':
        printf("This is Vowel");
        break;
    case 'i':
        printf("This is Vowel");
        break;
    case 'o':
        printf("This is Vowel");
        break;
    case 'u':
        printf("This is Vowel");
        break;
    default:
        printf("This is Consonant");
    }
    return 0;
}