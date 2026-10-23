#include <stdio.h>

typedef struct
{
    float real, imaginary;
} Complex;

void store(Complex *c)
{
    printf("Enter real part: ");
    scanf("%f", &c->real);

    printf("Enter imaginary part: ");
    scanf("%f", &c->imaginary);
}

void display(Complex *c)
{
    printf("\nReal part: %f", c->real);
    printf("\nImaginary part: %f", c->imaginary);
}

int main(void)
{
    Complex c;

    store(&c);
    display(&c);

    return 0;
}