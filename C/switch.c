#include <stdio.h>

int main()
{
    int a = 90, b = 80, c = 70;
    int sum, perc, check;
    sum = a + b + c;
    perc = sum * 100 / 300;
    printf("Enter input: ");
    scanf("%d", &check);

    switch (check)
    {
    case 1:
        printf("Total marks is: %d", sum);
        break;
    case 2:
        printf("Percentage of marks is: %d", perc);
        break;
    default:
        printf("Wrong Input");
        break;
    }
}