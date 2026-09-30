#include <stdio.h>

int VotingEligibility();

int main()
{
    int result;

    result = VotingEligibility();

    if(result == 1)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }

    return 0;
}

int VotingEligibility()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}