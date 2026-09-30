#include <stdio.h>

void VowelConst(char ch);

void  main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    VowelConst(ch);

}

void VowelConst(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' ||
       ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' ||
       ch == 'O' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}