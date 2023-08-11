#include <stdio.h>

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value for index: %d\n", i);
        scanf("%d", &arr[i]);
    }
    return 0;
}