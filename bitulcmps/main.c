#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n&1==1)
    {
        printf("LSB-ul e 1.");
    }
    else
    {
        printf("LSB-ul e 0.");
    }
    return 0;
}
