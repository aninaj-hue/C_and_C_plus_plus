#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int octal[1000100];
int main()
{
    int n,i, decimal=0;
    printf("Introduceti cate cifre contine numarul octal: ");
    scanf("%d",&n);
    printf("Introduceti numarul octal, cu spatiu intre fiecare cifra: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&octal[i]);
    }

    for(i=0; i<n; i++)
    {
        decimal=decimal+(octal[i]%10)*pow(8,n-i-1);
    }
    printf("Numarul introdus in decimal este: %d",decimal);

    return 0;
}

