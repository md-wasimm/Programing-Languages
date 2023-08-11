#include <stdio.h>
#include <string.h>

int main()
{
    char name[6] = {'W', 'a', 's', 'i', 'm', '\0'};
    char str1[50], str2[60], str3[70];
    strcpy(str1, name); // For copy
    strcat(name, str1); // Joining two strings side by side
    strcpy(str2, "Moon");
    strcpy(str3, "Samim");
    printf("%s\n", name);
    printf("%s\n", str1);
    printf("%s\n", str2);

    printf("%d", strcmp(str2, str3)); // Comapare two strings
}