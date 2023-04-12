#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=32; i<=127; i++)
    {
        printf("%c ", i);

        if(i%10==1)
        {
            printf("\n");//afiseaza cate 10 pe linie
        }
    }
    return 0;
}
