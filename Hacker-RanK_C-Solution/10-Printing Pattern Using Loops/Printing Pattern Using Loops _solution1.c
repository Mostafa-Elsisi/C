#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);

    int size = (2 * num) - 1 ; //Size of length & width
    int arr [size][size];  //Create Two dimensions array

    int start = 0;
    int end = size-1;

    for(int k=num ; k > 0; k--)
    {
        for(int i = start; i <= end ;i++)
        {
            for(int j =start; j <= end ;j++)
            {
                arr[i][j]=num;
            }
        }
        start++;
        end--;
        num--;

    }

    for(int i=0; i<size ;i++)
    {
        for(int j=0; j<size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

