#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numar;
    printf("Introduceti un numar intreg: ");
    scanf("%d",&numar);

    if(numar<0)
        printf("Numarul introdus este negativ si ");
    else
        printf("Numarul introdus este pozitiv si ");
    if(numar%2==0)
        printf("par.");
    else
        printf("impar.");
    return 0;
}
