#include <math.h>
#include <stdio.h>
#include <stdlib.h>


struct triangle {
  int a;
  int b;
  int c;
};

typedef struct triangle triangle;

double calculate_area(triangle *t) {
  double p = (t->a + t->b + t->c) / 2.0;
  double s = p * (p - t->a) * (p - t->b) * (p - t->c);
  double r = sqrt(s);
  return r;
}

void swap(triangle *x, triangle *y) {
  triangle tmp = *x;
  *x = *y;
  *y = tmp;
}

void sort_by_area(triangle *tr, int n) {
  /**
   * Sort an array a of the length n
   */

  int i, j, min_idx;
  for (i = 0; i < n - 1; i++) {
    min_idx = i;
    for (j = i + 1; j < n; j++)
      if (calculate_area(&tr[j]) < calculate_area(&tr[min_idx]))
        min_idx = j;

    if (min_idx != i)
      swap(&tr[min_idx], &tr[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  triangle *tr = malloc(n * sizeof(triangle));
  for (int i = 0; i < n; i++) {
    scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
  }
  sort_by_area(tr, n);
  for (int i = 0; i < n; i++) {
    printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
  }
  return 0;
}