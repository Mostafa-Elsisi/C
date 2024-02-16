#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1); //realloc is used to resize of pointer
    for (int i = 0; *s != '\0'; i++) {
        if (*s == ' ') {
            printf("\n");
        }else{
            printf("%c",*s);
        }
        s++;
    }
    return 0;
}
