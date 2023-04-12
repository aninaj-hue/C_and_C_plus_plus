#include <stdio.h>
#include <stdlib.h>
#define MAX 1010

int maxim(int v[],int nr)
{
    int i;
    int maxim=-1;
    for(i=1; i<=nr; i++)
    {
        if(v[i]>maxim)
        {
            maxim=v[i];
        }
    }
    return maxim;
}

int main()
{
    int array[MAX], size_array,i, n,m,j;
    scanf("%d", &size_array);
    for(i=1; i<=size_array; i++)
    {
        scanf("%d", &array[i]);
    }
    m=maxim(array, size_array);
    printf("Numarul maxim din vector este %d ", m);
    for( i = 1 ; i <= size_array; i ++)
    {
        for(j=i; j<=size_array; j++)
        {
            if(array[i]==m)
            {
                array[j] = array[j+1];
            }
            j++;
        }}
        size_array --;
        for(i=1; i<=size_array; i++)
        {
            printf("\n%d ", array[i]);
        }
        return 0;
    }
