#include<stdio.h>

double serie(double numar);
int main()
{
    double n;
    scanf("%lf",&n);
    double rez=serie(n);
    printf("rezultatul = %lf",rez);
    return 0;
}

double serie(double numar)
{
    if(numar==1)
        return 1;
    else
        return 1/numar+serie(numar-1);
}
