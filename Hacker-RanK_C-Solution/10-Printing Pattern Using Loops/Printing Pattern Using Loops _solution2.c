#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    scanf("%d",&num);
    int i,j;
    for (i=1-num;i<num;i++)
    {
        for(j=1-num;j<num;j++)
        {
            if (abs(i)>abs(j))
            {
                printf("%d ",abs(i)+1);
            }
            else
            {
                printf("%d ",abs(j)+1);
            }
        }
        printf("\n");
    }

}

