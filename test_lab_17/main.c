#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 10000

int coef[SIZE];

int main()
{
    int x, n, i;
    printf("Introduceti gradul polinomului(n): ");
    scanf("%d",&n);
    if((n<=0)||(n>100))
    {
        printf("imposibil");
    }
    else
    {
    printf("Introduceti coeficientii polinomului(n+1 coeficienti): ");
    for( i=0; i<=n; i++)
       {scanf("%d",&coef[i]);}
 printf("Introduceti solutia x: ");
    scanf("%d",&x);
    float polinom=0;
    for(i=0;i<=n;i++)
    {
        polinom+=(coef[i]*pow(x,n-i));
    }
    printf("Polinomul dat este egal cu: %.4f",polinom);
    }
    return 0;
}
