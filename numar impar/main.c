#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Introduceti numarul n= ");
    scanf("%d",&n);
    if((n&1)==1)
    {
        printf("Numarul e impar.");
    }
    else
    {
        printf("Numarul e par.");
    }
    return 0;
}
