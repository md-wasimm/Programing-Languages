#include <stdio.h>

int main()
{

    // int age;
    // printf("Enter the age: ");
    // scanf("%d", &age);
    // if (age<18)
    // {
    //     printf("You cannot drive");
    // }
    // else{
    //     printf("You can drive");
    // }
    // return 0;

    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You cannot drive");
    }
    else if (age >= 18 && age < 24)
    {
        printf("You can drive but carefully");
    }
    else
    {
        printf("You can drive");
    }
    return 0;
}