#include <stdio.h>
#include <string.h>
#define len 1000
char s[len];
int freq[10];
int main() {
  scanf("%s", s);
  char *ptr = s;
  for (int i = 0; i < strlen(s); i++) {
    if (*ptr >= '0' && *ptr <= '9') {
      int x = (*ptr) - '0'; // Conert from char to int
      freq[x]++;
    }
    ptr++;
  }
  for (int i = 0; i < 10; i++) {
    printf("%d ", freq[i]);
  }
  printf("\n");
}