
#include <stdio.h>

char numbers [9][6] ={"one","two","three","four","five","six","seven","eight","nine"};
int main ()
{
    int num1 ,num2;

    scanf("%d%d",&num1,&num2);
    for(int i = num1 ; i <= num2 ; i++)
    {
        if((i >= 1) && (i <= 9))
        {
            printf("%s\n", numbers[i - 1]);
        }
        else if (( i > 9) && (i%2 == 0))
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }

    }
}