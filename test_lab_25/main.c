#include <stdio.h>
#include <stdlib.h>
#define Max 100
int main()
{
    int matrice[Max][Max], n,m,i,j, sum=0;
    scanf("%d", &n);
    scanf("%d", &m);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d", &matrice[i][j]);
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(matrice[i][j]%2==0)
            {
                sum+=matrice[i][j];
            }
        }
    }
    printf("%d ", sum);
    return 0;
}
