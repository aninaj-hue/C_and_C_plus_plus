#include <stdio.h>
#include <stdlib.h>
#define Max 10
int main()
{
    int matrice[Max][Max], i,j,n,m,nr=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d", &matrice[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    { int ok=0;
        for(j=1;j<=m;j++)
        {
            if(matrice[i][j]!=matrice[i][1])
            {
                ok=1;
            }}
            if(ok)
            {
                nr++;
            }

    }
    printf("%d", nr);
    return 0;
}
