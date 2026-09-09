#include <stdio.h>

int main() {
    int min=66, hr, remainingMinutes;

    hr = min/ 60;
    remainingMinutes = min % 60;

    printf("Hours = %d\n", hr);
    printf("Remaining Minutes = %d\n", remainingMinutes);

    return 0;
}