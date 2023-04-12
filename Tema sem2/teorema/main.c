#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
      int a,b,c;
    double A,B,C;
    printf("Introduceti lungimea laturilor triunghiului: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>c+b||b>a+c||c>a+b)
        printf("Acesta nu este un triunghi!");
    else
    {
        A=acos((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c));
        B=acos((pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c));
        C=acos((pow(a,2)+pow(b,2)-pow(a,2))/(2*a*b));
        printf("Masura fiecarui unghi a triunghiului este:\nA = %.8f radiani\nB = %.8f radiani\nC = %.8f radiani",A,B,C);
    }

    return 0;
}
