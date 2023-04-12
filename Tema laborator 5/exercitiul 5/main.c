#include <stdio.h>
#include <stdlib.h>

int x1[10010],x2[10010],v[200020];

int main()
{
    int n,m,i;
    printf("Introduceti dimensiunea primului vector: ");
    scanf("%d",&n);
    printf("\nIntroduceti elementele primului vector: ");
    for(i=0; i<n; i++)
        scanf("%d",&x1[i]);
    printf("\nIntroduceti dimensiunea celui de al doilea vector: ");
    scanf("%d",&m);
    printf("\nIntroduceti elementele celui de al doilea vector: ");
    for(int i=0; i<m; i++)
        scanf("%d",&x2[i]);

    int k=0,j=0,i=0;
    for(i=0; i<n; i++)
    {
        if(x1[i]>=x2[j])
        {
            for(j=j; j<m; j++)
            {
                if(x1[i]>=x2[j])
                    v[k++]=x2[j];
                else
                    break;
            }
        }
        if(x1[i]<=x2[j])
        {
            v[k++]=x1[i];
        }
        else
            break;
    }
    while(i<n)
    {
        v[k++]=x1[i++];
    }
    while(j<m)
    {
        v[k++]=x2[j++];
    }

    printf("\nInterclasarea dintre cei doi vectori ordonati este:\n");
    for(int l=0; l<k; l++)
    {
        printf("%d ",v[l]);
    }

    return 0;
}
