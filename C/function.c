#include <stdio.h>

void add(char *char1)
{
    printf("The value is %s ", char1);
}

// int main(){
//     add("Hello World!");
//     return 0;
// }

float sum(float a, float b)
{
    return a + b;
}

int main()
{
    printf("The sum is: %f", sum(100, 200));
    return 0;
}