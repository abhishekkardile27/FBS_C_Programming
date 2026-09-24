//Check the given number is prime or not.

#include<stdio.h>

void main() {

    int i = 2;
    int n = 10;
    int flag = 0;

    while(i <= n / 2) {

        if(n % i == 0) {
            flag = 1;
            break;
        }

        i++;
    }

    if(flag == 1) {
        printf("Number is Not Prime");
    }
    else {
        printf("Number is Prime");
    }

  
}
