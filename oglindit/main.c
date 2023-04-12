#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, oglindit=0, nr=0;
    printf("Intruduceti numarul:");
    scanf("%d", &n);
    while(n!=0)
    {
   nr=n%10;
   oglindit=oglindit*10+nr;
   n=n/10;
    }
    printf("%d", oglindit);
    return 0;
}
