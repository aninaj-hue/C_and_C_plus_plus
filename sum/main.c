#include <stdio.h>

int main()
{
    int n, i, sum=0, uc;
    scanf("%d", &n);
    n=n/10;
    do
    {
        uc=n%10;
        n=n/100;
        sum+=uc;
    }
    while(n!=0);
    printf("%d", sum);
    return 0;
}
