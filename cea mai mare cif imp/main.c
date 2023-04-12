#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max=0,ok=0;
    scanf("%d",&n);
    while(n!=0)
    {
        if((n%10%2==1)&&(n%10>max))
        {
            max=n%10;
            ok=1;
        }
        n=n/10;

    }
    if(ok)
        printf("%d", max);
    else
        printf("nu exista");
    return 0;
}
