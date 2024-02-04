
#include <stdio.h>

char numbers [9][6] ={"one","two","three","four","five","six","seven","eight","nine"};
int main ()
{
    int num;
    int flag=1;
    scanf("%d",&num);
    if((num>=1) && (num<=9))
    {
        for(int i=0 ; i<9 ;i++)
        {
           if(num == flag)
           {
            printf("%s\n",numbers[flag-1]);
            break;

           }
           else{
            flag++;
           }

        }
    }
    else{
        printf("Greater than 9\n");
    }
}