#include <stdio.h>
#include <stdlib.h>

#define MAX 1010
int main()
{
    int array[MAX], i, size_array, nr=0, array2[MAX], ok=0, a,b;
    scanf("%d", &size_array);
    if((size_array>=0)||(size_array<50))
    {
        for(i=1; i<=size_array; i++)
        {
            scanf("%d", &array[i]);
            array2[array[i]]++;
        }
        for(i=size_array; i>=0; i--)
        {
            if(array2[i]%2==1)
                if(ok==0)
                {
                    a=i;
                    ok=1;
                }
                else if(ok==1)
                {
                    b=i;
                    ok=2;
                }
        }
        if(ok==2)
            printf("%d %d", a, b);
        else
            printf("Nu exista.");
    }
    else
    {
        printf("Imposibil.");
    }


    return 0;
}
