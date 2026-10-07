
#include <stdio.h>

void table();

int main()
{
    table();

    return 0;
}
void table()
{
    int n = 5;
    int i;

    for(i = 1; i <= 10; i++)
        printf("%d ", n * i);
}