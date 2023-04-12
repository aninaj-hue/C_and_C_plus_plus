#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int binar[1000100];
int main()
{
    int n;
    printf("Introduceti cate cifre contine numarul binar: ");
    scanf("%d",&n);
    printf("Introduceti numarul binar, cu spatiu intre fiecare cifra: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&binar[i]);
    }
    int decimal=0;

    for(int i=0; i<n; i++)
    {
        decimal=decimal+(binar[i]%10)*pow(2,n-i-1);
    }
    printf("Numarul introdus in decimal este: %d",decimal);

    return 0;
}

