#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i,produs=1,p=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    produs=produs*p;
    p=p+2;
    }
    printf("%d", produs);
    return 0;
}
