#include <stdio.h>
#include <stdlib.h>

int prim(int x)
{
    int d = 2, cnt = 0;
    while(x > 1)
    {
        int p = 0;
        while(x % d == 0)
            p++, x/=d;
        if(p)
            cnt+=d;
        d++;
        if(d * d > x)
            d = x;
    }
    return cnt;
}

int main()
{
    int x, y;
    scanf("%d %d", &x,&y);
    if(prim(x) > prim(y))
        printf("%d", x);
    else if(prim(x) < prim(y))
        printf("%d",y);
    else if(x<y)
    {
        printf("%d",x);
    }
    else
    {
        printf("%d", y);
    }

    return 0;
}
