#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Introduceti numarul n=");
    scanf("%d",&n);
    for(i=7;i>=0;i--)
    {
        printf("%d \n",(n>>i)&1);
    }
    return 0;
}
