#include <stdio.h>
#include <stdlib.h>

void interschimba(int *p, int *q)
{
    int aux=*p;
    *p=*q;
    *q=aux;
}

int main()
{
    int a,b;
    printf("Introduceti valorile celor doua numere: ");
    scanf("%d %d",&a,&b);
    interschimba(&a,&b);
    printf("Cele doua numere interschimbate sunt: %d %d",a,b);
    return 0;
}
