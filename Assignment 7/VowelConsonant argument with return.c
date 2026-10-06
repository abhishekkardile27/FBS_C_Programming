#include <stdio.h>

int VowelConsonant(char *ch);

int main()
{
    char ch;
    int result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = VowelConsonant(&ch);

    if (result == 1)
        printf("Vowel");
    else
        printf("Consonant");

    return 0;
}

int VowelConsonant(char *ch)
{
    if (*ch == 'a' || *ch == 'e' || *ch == 'i' ||
        *ch == 'o' || *ch == 'u' ||
        *ch == 'A' || *ch == 'E' || *ch == 'I' ||
        *ch == 'O' || *ch == 'U')
        return 1;
    else
        return 0;
}