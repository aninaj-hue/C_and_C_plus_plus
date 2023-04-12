#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,schimb=0,n;
    int V[1000];
    printf("Introduceti numarul de elemente n al sirului\n");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&V[i]);
    }
    printf("Ati introdus vectorul:\n");
    for (i=0; i<n; i++)
    {
        printf("%d  \n", V[i]);
    }
    printf("Vectorul sortat crescator este:\n");
    for(i=0; i<=n-2; i++)
    {
        for(j=i+1; j<=n-1; j++)
        {
            if(V[i]>V[j])
            {
                schimb=V[i];
                V[i]=V[j];
                V[j]=schimb;
            }
        }

    }
    for(i=0; i<=n-1; i++)
    {
        printf("%d ", V[i]);

    }
    return 0;
}
