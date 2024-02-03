#include <stdio.h>
int max (int a ,int b, int c,int d)
{
    int max =0;
    if(a>b && a>c && a>d)
    {
        return a;
    }else if (b>a && b>c && b>d)
    {
        return b;
    }else if(c>a && c>b && c>d)
    {
        return c;

    }else
    {
        return d;
    }
}
int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);


    printf("%d\n", max(num1,num2,num3,num4));
    
    return 0;
}
