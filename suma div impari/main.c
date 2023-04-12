#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ogl=0,i,nr=0;
    scanf("%d",&n);
    while(n!=0)
    {
        ogl=ogl*10+n%10;
        n=n/10;
    }
    for(i=1; i<=ogl; i++)
    {
        if(ogl%i==0)
        {
            nr++;
        }

    }

    printf("%d", nr);


    return 0;
}
