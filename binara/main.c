#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100],n,i,x, ok=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }
    printf("nr cautat este: ");
    scanf("%d", &x);
    for(i=0;i<=n/2;i++)
    {
        if(x==v[i])
        { ok=1;
        }
        else
        { ok=0;
        }
    } if(ok==1)
    {
         printf("exista");
    }
    else
    {
        printf("nu exista");
    }
    return 0;
}
