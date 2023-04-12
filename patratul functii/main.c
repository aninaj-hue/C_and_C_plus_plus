#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double patratul( double numar);
int main()
{    int n;
printf("Introduceti numarul ");
scanf("%d", &n);
n=patratul(n);
printf("Patratul numarului este %d", n);
    return 0;
}
double patratul(double numar)
{
    return pow(numar,2);
}
