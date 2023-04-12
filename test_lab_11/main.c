#include <stdio.h>
#include <stdlib.h>
#define MAX 1010
int main()
{
    int matrice[MAX][MAX], size_mat,i,j, k=0, aux[MAX];
    scanf("%d", &size_mat);
    if((size_mat<=0)||(size_mat>50))
    {
        printf("imposibil");
    }
    else
    {
        for(i=1;i<=size_mat;i++)
        {
            for(j=1;j<=size_mat;j++)
            {
                scanf("%d", &matrice[i][j]);
            }
        }

        for(j=1;j<=size_mat;j++)
        {
            for(i=1;i<=size_mat;i++)
            { aux[i]=matrice[0][j];
                if(aux[i]>matrice[i][j])
                {
                    aux[i]=matrice[i][j];
                    k++;
                }
            }
        }
        for(i=1;i<=k;i++)
       {printf("%d", aux);}
    }
    return 0;
}
