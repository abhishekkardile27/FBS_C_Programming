#include <stdio.h>

char vowelORconst();

int main()
{
    char result;

    result = vowelORconst();

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

char vowelORconst()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

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