#include <stdio.h>
#include <string.h>

struct Books
{
    char name[50];
    char author[20];
    int price;
};

void printStruct(struct Books bk)
{
    printf("The book name is %s\n", bk.name);
    printf("The author name is %s\n", bk.author);
    printf("The price is %d\n", bk.price);
};

int main()
{
    struct Books bk1, bk2;
    strcpy(bk1.name, "C Programming");
    strcpy(bk1.author, "Dennis");
    bk1.price = 90;
    printStruct(bk1);

    strcpy(bk2.name, "SSC CGL 2024 ");
    strcpy(bk2.author, "Kiran Publications");
    bk2.price = 550;
    printStruct(bk2);
}
