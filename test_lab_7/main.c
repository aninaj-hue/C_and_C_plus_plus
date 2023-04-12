#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int matrice[MAX][MAX];
int main()
{
    int  size_matrice,i,j, x=0, y=0, dif=0;
    scanf("%d",&size_matrice);
    if((size_matrice<=0)||(size_matrice>50))
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
        for(i=0; i<size_matrice; i++)
        {
            x=x+ matrice[i][i];//suma elem de pe dig principala
        }
        for(i=0; i<size_matrice; i++)
        {
            for(j=i+1; j<size_matrice; j++)
            {
                y=y+matrice[i][j];//suma elem de deasupra diag principala
            }
        }
        dif=x-y;
        printf("%d", dif);
    }

    return 0;
}
