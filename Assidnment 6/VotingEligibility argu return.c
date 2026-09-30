#include <stdio.h>

int VotingEligibility(int age);

int main()
{
    int age, result;

    printf("Enter your age: ");
    scanf("%d", &age);

    result = VotingEligibility(age);

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

int VotingEligibility(int age)
{
    if(age >= 18)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}