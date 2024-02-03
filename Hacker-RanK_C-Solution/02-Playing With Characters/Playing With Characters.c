#include <stdio.h>

int main()
{
    char ch;
    char s[46]; 
    char sen[100];

    scanf("%c", &ch );
    scanf("%s \n", &s );
    scanf("%[^\n]", sen );

    printf("%c \n", ch);
    printf("%s \n", s);
    printf("%s", sen);

    return 0;
}
