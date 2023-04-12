#include <stdio.h>
#include <stdlib.h>
#define MAX 1010
int main()
{
    int array[MAX],i,size_array,x,p;
    scanf("%d", &size_array);
    scanf("%d", &x);
    scanf("%d", &p);
    for(i=1; i<=size_array; i++)
    {
        scanf("%d", &array[i]);
    }
    size_array++;
    for(i = size_array ; i >p ; i --)
    {
        array[i] = array[i-1];
    }
    array[p] = x;
    for(i=1; i<=size_array; i++)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
