#include <stdio.h>
#include <math.h>

int main() {
    int num1 = 0;
    int num2 = 0;
    float num3=0.0;
    float num4=0.0;
    scanf("%d%d", &num1, &num2);
    scanf("%f%f", &num3, &num4);

    printf("%d %d\n", (num1+num2), (num1-num2));
    printf("%.1f %.1f\n", (num3+num4), (num3-num4));

    return 0;
}
