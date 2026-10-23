#include <stdio.h>

typedef struct
{
    int id;
    char name[30];
    int quantity;
    float price;
} Product;

void store(Product p)
{
    printf("Enter ID: ");
    scanf("%d", &p.id);

    printf("Enter Name: ");
    scanf("%s", p.name);

    printf("Enter Quantity: ");
    scanf("%d", &p.quantity);

    printf("Enter Price: ");
    scanf("%f", &p.price);
}

void display(Product p)
{
    printf("\nID: %d", p.id);
    printf("\nName: %s", p.name);
    printf("\nQuantity: %d", p.quantity);
    printf("\nPrice: %f", p.price);
}

int main(void)
{
    Product p = {0};

    store(p);
    display(p);

    return 0;
}