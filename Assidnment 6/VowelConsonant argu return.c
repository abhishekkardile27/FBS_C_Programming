#include <stdio.h>

char VowelConsonant(char ch);

int main()
{
    char ch, result;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    result = VowelConsonant(ch);

    if(result == 'V')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}

char VowelConsonant(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' ||
       ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' ||
       ch == 'O' || ch == 'U')
    {
        return 'V';
    }
    else
    {
        return 'C';
    }
}