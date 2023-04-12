#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int nr_par=0, uc=0;
    printf("Introduceti numarul: ");
    scanf("%d", &n);
    if(n==0)
    {
        nr_par=1;
    }
    while(n!=0)
    {
        uc=n%10;
        n=n/10;
        if(uc%2==0)
        {
            nr_par=nr_par+1;
        }
    }

    printf("%d", nr_par);

    return 0;
}
