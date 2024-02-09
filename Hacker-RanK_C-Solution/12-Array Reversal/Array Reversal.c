#include <malloc.h>
#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int *arr = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", (arr + i));
  }
  int last = n - 1;
  for (int i = 0; i < n / 2; i++) {
    int tmp = *(arr + i);
    *(arr + i) = *(arr + last);
    *(arr + last) = tmp;
    last--;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", *(arr + i));
  }
  free(arr);
}
