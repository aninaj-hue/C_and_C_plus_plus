#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,*ap,*bp,s;
    printf("Introduceti cele doua numere carora vreti sa le aflati suma: ");
    scanf("%d%d", &a,&b);
    ap=&a;
    bp=&b;
    s=*ap+*bp;
    printf("Suma celor doua numere este %d", s);
    return 0;
}
