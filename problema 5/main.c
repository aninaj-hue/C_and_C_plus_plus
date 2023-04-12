#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("Rezolvarea ecuatiei de gradul al doilea \n");
    float a,b,c,d,x1,x2;
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if(a!=0)
    {
        d=b*b-4*a*c;
        if(d>0)
        {
            x1=(-b+sqrt(d))/(2*a);
            x2=(-b-sqrt(d))/(2*a);
            printf("x1= %f",x1);
            printf("x2= %f",x2);
        }
        else if(d<0)
        {
            printf("Ecuatia nu are solutii in R");
        }
    }
    if(a==0)
    {
            x1=-b/c;
            printf("x= %f", x1);
        }
    return 0;
}
