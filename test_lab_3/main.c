#include <stdio.h>
#include <stdlib.h>
#define MAX 1010

int main()
{
    int array1[MAX], array2[MAX], i, size_array1, j, k=0;
    scanf("%d", &size_array1);
    for(i=1; i<=size_array1; i++)
    {
        scanf("%d", &array1[i]);
    }
    k=size_array1/2;
    for (i=1; i<=k; i++)
    {
        array2[i]=array1[i+k-1];// creare alt vect cu jumatate din celalalt

    }
    for(i=1; i<=3; i++)
    {
        printf("%d \n", array2[i]);
    }
    return 0;
}
