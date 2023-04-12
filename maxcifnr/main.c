#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x,i, uc=0, max, nr=0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &x);
        max=0;
        while(x>0)
        {
            uc=x%10;
            if(uc>max)
                max=uc;
            x=x/10;
        }
        if (max%2==1)
        {
            nr++;
        }
    }
    printf("%d", nr);
    return 0;
}
