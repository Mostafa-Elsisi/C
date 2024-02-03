#include <stdio.h>
#include <math.h>
void update(int *a,int *b) {
    int update_A = *a + *b;
    int update_B = abs(*a-*b);
    *a = update_A;
    *b = update_B;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}