#include <stdio.h>
#include <stdlib.h>

int par_sau_impar( int numar);
int main()
{
    int n;
    printf("Introduceti numarul ");
    scanf("%d", &n);
    n=par_sau_impar(n);
    printf("Programul va afisa cifra 1 daca numarul este par sau cifra 0 daca numarul este impar. \n");
    printf("Este afisata cifra %d", n);
    return 0;
}
int par_sau_impar(int numar)
{
    return numar%2==0;
}
