#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c;
    float h,p;
        printf("\nIntroduceti a=");
        scanf("%d", &a);
        printf("\nIntroduceti b=");
        scanf("%d", &b);
        printf("\nIntroduceti c=");
        scanf("%d", &c);
        p=(a+b+c)/2;
        h=sqrt(p*(p-a)*(p-b)*(p-c));
        printf (" Aria este: %f", h);
    return 0;
}
