#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n, i, j, sum=0;
     printf("Introduceti numarul: ");
     scanf("%d", &n);
     j=n/2;
     sum=n;
     for(i=1;i<=j;i++)
     {
           if(n%i==0 )
         {
             sum=sum+i;
         }
     }
     printf("%d", sum);
    return 0;
}
