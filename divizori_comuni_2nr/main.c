#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, aux;
    printf("Introduceti valorile celor doua numere: ");
    scanf("%d %d", &x, &y);
    if(x<y)// ordonare
    {
        aux=x;
        x=y;
        y=aux;
    }
    for(i=1;i<=x;i++)
    {
        if((x%i==0) &&( y%i==0) )
        {
            printf("Divizorii comuni a celor doua numere sunt: %d\n", i);
        }
    }
    return 0;
}
