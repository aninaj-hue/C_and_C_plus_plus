#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, uc, max;
    printf("Introduceti numarul:");
    scanf("%d", &n);
    max=n%10;
    n=n/10;
    while(n!=0)
    {
        uc=n%10;
        if(uc>max)
        {
            max=uc;
        }
        n=n/10;
    }
    printf("Cea mai mare cifra este: %d", max);
    return 0;
}
