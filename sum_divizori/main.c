#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum=0, i,j;
    printf("Introduceti numarul: ");
    scanf("%d", &n);
    sum=1+n;
    j=n/2;
    for(i=2;i<=j;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    printf("%d", sum);
    return 0;
}
