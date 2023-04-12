#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  n, cif=0, nr=0, p=1;
    printf("Introduceti numarul: ");
    scanf("%d", &n);
    while(n!=0)
    {
        cif=n%10;
        if(cif%2==0)
        {
            nr=nr+cif*p;
            p=p*10;
        }
        n=n/10;
    }
    printf("%d",nr);
    return 0;
}
