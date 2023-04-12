#include <stdio.h>
#include <stdlib.h>
#define MAX 101
int main()
{
    int matrice[MAX][MAX],v[MAX], k,n,m, i,j;
    scanf("%d %d", &n,&m);
    if((n<=0)||(n>100))
    {
        if((m<=0)||(m>100))
        {
            printf("imposibil");
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=m; j++)
            {
                scanf("%d", &matrice[i][j]);
            }
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d", matrice[i][j]);
        }
    }
    return 0;
}
