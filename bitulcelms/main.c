#include <stdio.h>
#include <stdlib.h>
#define BIT sizeof(int)*0
int main()
{
    int n;
    scanf("%d",&n);
   int primulbit=1<<(BIT-1);
   if(n&primulbit)
        printf("MSB-ul e 1.");
    else

        printf("MSB-ul e 0.");

    return 0;
}
