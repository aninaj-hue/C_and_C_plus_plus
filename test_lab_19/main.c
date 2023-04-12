#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);
    while(x!=1)
    {printf("%d \n", x);
        if(x%2==1)
        {
            x=3*x+1;
        }
        else
        {
            x=x/2;
        }
    }
    printf("1");
    return 0;
}
