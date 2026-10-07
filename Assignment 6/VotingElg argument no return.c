#include <stdio.h>

void VotingElg(int age);

void main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    VotingElg(age);


}

void VotingElg(int age)
{
    if(age >= 18)
    {
        printf("Eligible to vote");
    }
    else
    {
        printf("Not eligible to vote");
    }
}