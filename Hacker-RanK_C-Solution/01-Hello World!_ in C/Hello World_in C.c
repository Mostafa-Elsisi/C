#include <stdio.h>

int main()
{
    char strings[100];
    scanf(" %[^\n]", strings);

    printf("Hello, World!\n");
    printf("%s\n", strings);

    return 0;
}
