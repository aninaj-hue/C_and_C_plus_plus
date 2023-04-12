#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,nr_par=0,i,nr_impar=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x%2==0)
        {
            nr_par++;
        }
        else
        {
            nr_impar++;
        }
    }
    if(nr_par>nr_impar)
    {
        printf("%d", nr_par-nr_impar);
    }
    else
    {
        printf("%d", nr_impar-nr_par);
    }
    return 0;
}
