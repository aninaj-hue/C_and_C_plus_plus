#include <stdio.h>
#include <stdlib.h>
#define MAX 1010
int main()
{
    int array[MAX], i, size_array;
    scanf("%d", &size_array);
    for(i=1; i<=size_array; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=1; i<=size_array; i++)
    {
        printf("%d ", array[i]);
        if((array[i]+array[i+1])%2==0)
        {
            if(i==size_array-1)
            {
                return -1;
            }
            else

                printf("%d ",(array[i]+array[i+1])/2);
        }
    }


    return 0;
}
