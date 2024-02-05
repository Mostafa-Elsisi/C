#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_and=0,max_or=0,max_xor=0;
    int r_and,r_or,r_xor;
     for(int i=1 ; i<n ;i++)
     {
         for(int j=i+1; j<=n;j++)
         {
             r_and=i&j;
             r_or=i|j;
             r_xor=i^j;
             if(r_and < k)
             {
                 if(r_and>max_and) { max_and = r_and; }
             }
             if(r_or <k)
             {
                 if(r_or>max_or) { max_or = r_or; }
             }
             if(r_xor <k)
             {
                 if(r_xor>max_xor) { max_xor = r_xor; }
             }
         }
     }
     printf("%d\n%d\n%d\n",max_and,max_or,max_xor);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}