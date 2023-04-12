#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, v[1001], i,c,j;
    scanf("%d", &n);
    for(i=1; i<=n; i++);
    {
        scanf("%d", &v[i]);
    }
    for(i=1; i<=n; i++)
    {
       c=v[i];
        if(c%2==0)
        {
            n++;
            for(j=n; j>i+1; j--)
                v[j]=v[j-1];
            v[i+1]=2*c;
            i++;
        }
    }
    for(i=1; i<=n; i++)
    {
        printf("%d ", v[i]);
    }
    return 0;
}
