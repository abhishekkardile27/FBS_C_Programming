#include <stdio.h>

void     checkVotingEligibility();

void main()
{
    checkVotingEligibility();

    
}

void checkVotingEligibility()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}