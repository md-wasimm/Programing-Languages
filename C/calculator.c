#include <stdio.h>

int main()
{
    char calculator;
    float a, b;
    printf("Choose an operator(+, -, *, /) to perform the operation in C Calculator: ");
    scanf("%c", &calculator);
    if (calculator == '+')
    {
        printf("You have selected summation.\n");
    }
    else if (calculator == '-')
    {
        printf("You have selected difference.\n");
    }
    else if (calculator == '*')
    {
        printf("You have selected multiplication.\n");
    }
    else if (calculator == '/')
    {
        printf("You have selected division.\n");
    }

    printf("Enter number 1: ");
    scanf("%f", &a);
    printf("Enter number 2: ");
    scanf("%f", &b);

    switch (calculator)
    {
    case '+':
        printf("The sum is: %f", a + b);
        break;
    case '-':
        printf("The difference is: %f", a - b);
        break;
    case '*':
        printf("The multiplication is: %f", a * b);
        break;
    case '/':
        printf("The division is: %f", a / b);
        break;
    default:
        break;
    }
    return 0;
}