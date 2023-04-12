#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],i,n,ok=0,x;
    printf("Dimensiunea vectorului este: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
    printf("Elementul cautat: ");
    scanf("%d", &x);
    for(i=0;i<n;i++)
    {
        if(v[i]==x)
        {
            ok=1;
        }
    }
    if(ok==0)
    {
        printf("nu exista");
    }
    else
    {
        printf("exista");
    }
    return 0;
}
