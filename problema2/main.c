#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,max1,max2,min1,min2;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        max1=a;
        min1=b;
    }
    else
    {
        min1=a;
        max1=b;
    }
    if(c>d)
    {
        min2=d;
        max2=c;
    }
    else
    {
        min2=c;
        max2=d;
    }
    if(max1>max2)
    {
        printf("%d ", max1);
    }
    else
    {
        printf ("%d", max2);
    }
    if(min1<min2)
    {   printf("Minimul este: ");
        printf("%d ", min1);
    }
    else
    {
        printf("Minimul este: ");
        printf ("%d ", min2);
    }
    return 0;
}
