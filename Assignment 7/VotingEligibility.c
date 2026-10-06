#include <stdio.h>


void VotingEligibility(int *age);

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    VotingEligibility(&age);

    return 0;
}

void VotingEligibility(int *age)
{
    if (*age >= 18)
        printf("Person is eligible to vote");
    else
        printf("Person is not eligible to vote");
}