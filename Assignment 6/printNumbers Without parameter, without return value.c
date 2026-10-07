#include <stdio.h>
void printNumbers();
int main()
{
    printNumbers();

    return 0;
}


void printNumbers()
{
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d ", i);
}
