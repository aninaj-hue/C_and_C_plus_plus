#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20][20],i,j,m,n;
    printf("Introduceti dimensiunea matricei: ");
    scanf("%d",&n);
    printf("Introduceti elementele matricei: ");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    int ok=1;
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            if(a[i][j]!=a[j][i])
                ok=0;
    if(ok==1)
        printf("Matricea este simetrica");
    else
        printf("Matricea nu este simetrica");
    return 0;
}
