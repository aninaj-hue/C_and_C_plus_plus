#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int matrice[MAX][MAX], i, j, size_matrice, suma_sec=0,suma_dea=0;
    scanf("%d", &size_matrice);
    if((size_matrice<=0)||(size_matrice>100))
    {
        printf("Imposibil.");
    }
    else
    {
        for(i=0; i<size_matrice; i++)
        {
            for(j=0; j<size_matrice; j++)
            {
                scanf("%d", &matrice[i][j]);
            }
        }
        for(i=size_matrice-1; i>=1; i--)
        {
            for(j=size_matrice-i; j<size_matrice; j++)
            {
                suma_sec+=matrice[i][j];//sub diag sec
            }
        }

        for(i=0; i<size_matrice-1; i++)
        {
            for(j=0; j<=size_matrice-2-i; j++)
            {
                suma_dea+=matrice[i][j];// deasupra diag sec
            }
        }
        printf("%d", suma_sec-suma_dea);
    }

    return 0;
}
