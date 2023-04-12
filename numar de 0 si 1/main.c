#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,z,u;
    scanf("%d",&size);
    for(i=7;i>=0;i--)
    {
        if((size<<i)&1==1)
        {z+=z;}
        else
          {u+=u;}

    }
    printf("%d", z);
    printf("%d", u);
    return 0;
}
