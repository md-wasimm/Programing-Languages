#include <stdio.h>

int main()
{
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }
    int j = 0;
    for (int j = 0; j < 20; j++)
    {
        printf("%d\n", j);
    }

    do
    {
        printf("Do while loop is running.");
    } while (j > 2564);

    return 0;
}