#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k;
    printf("Introduceti valoarea lui k= ");
    scanf("%d",&k);
    if(k<=15)
    printf("%d",1<<k);
    return 0;
}
