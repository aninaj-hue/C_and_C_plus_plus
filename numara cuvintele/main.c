#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char sir[1000];
    int i,nr=1;
    fgets(sir, sizeof(sir), stdin);
    for( i=0; i<strlen(sir); i++)
    {
        if(sir[i]==' ')
            nr++;
    }
    printf("Numarul de cuvinte este %d",nr);

    return 0;
}
