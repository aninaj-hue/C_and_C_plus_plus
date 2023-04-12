#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,p=1;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        p=p+2;
    }
    printf("%d", p-2);
    return 0;
}
