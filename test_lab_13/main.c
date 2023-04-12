#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 1010
int main()
{
    int array[MAX], i,j, size_array, val=0, r;
    scanf("%d", &size_array);
    for(i=1; i<=size_array; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=1; i<=size_array; i++)
    {
        val=array[i];
        r=sqrt(val);
        if(r*r==val)
        {
            size_array++;
            for(j=size_array; j>i; j--)
            {
                array[j]=array[j-1];
            }
            array[i]=r;
            i++;
        }
    }
    for(i=1; i<=size_array; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
