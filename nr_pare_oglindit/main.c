#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, nr=0,oglin=0;
    printf("Introduceti numarul: ");
    scanf("%d", &n);
    while(n!=0)
    {
        nr=n%10;
        if(nr%2==0)
        {
            oglin=oglin*10+nr;
        }
        n=n/10;
    }
    printf("Oglinditul nr pare este %d", oglin);
    return 0;
}
