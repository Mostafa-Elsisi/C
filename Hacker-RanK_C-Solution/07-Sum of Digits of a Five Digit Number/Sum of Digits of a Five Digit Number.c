#include <stdio.h>

int main ()
{
    int SumOfNumber =0;
    int num;
    scanf("%d",&num);
    
    while(num != 0)
    {
        int reminder = num %10;
        SumOfNumber += reminder;
        num/=10;
    }
    printf("%d\n",SumOfNumber);

}