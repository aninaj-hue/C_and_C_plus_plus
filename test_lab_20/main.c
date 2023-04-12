#include <stdio.h>
#include <stdlib.h>
int i,j,c[100],n,m,d;
int a[100][100],b[200][100];
int main()
{
    scanf("%d%d",&n,&m);
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d",&a[i][j]);
    int k=0;
    for(i=1; i<=2*n; i+=2)
    {
        for(j=1; j<=m; j++)
        {
            b[i][j]=a[i-k][j];
        }
        k++;
    }
    for(i=2; i<=2*n; i+=2)
    {
        for(j=1; j<=m; j++)
        {
            b[i][j]=b[i-1][m-j+1];//invers
        }
    }
    for(i=1; i<=2*n; i++)
    {
        for(j=1; j<=m; j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
