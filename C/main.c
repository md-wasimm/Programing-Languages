#include <stdio.h>

int main()
{

    // Data Types - int, float, char

    int a = 3;                  // 2 to 4 bytes
    unsigned short integer = 3; // 2 bytes
    long integer1 = 3;          // 4 bytes
    short integer2 = 3;         // 2 bytes

    float b = 8.0;                  // 4 bytes  - 6 decimal precision
    double myFloat1 = 8.45;         // 8 bytes - 15 decimal precision
    long double myFloat2 = 8.54533; // 10 bytes - 19 decimal precision

    char c = 'W';

    printf("The size taken by the int is %d\n", sizeof(int));
    printf("The size taken by the unsigned int is %d\n", sizeof(unsigned short));
    printf("The size taken by the long is %d\n", sizeof(long));
    printf("The size taken by the short is %d\n", sizeof(short));

    printf("The size taken by the float is %d\n", sizeof(float));
    printf("The size taken by the double is %d\n", sizeof(double));
    printf("The size taken by the long double is %d\n", sizeof(long double));

    printf("The size taken by the char is %d\n", sizeof(char));
    return 0;
}