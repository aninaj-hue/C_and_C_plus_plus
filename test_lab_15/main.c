#include <stdio.h>
#include <stdlib.h>
#define MAX 1010
int max(int v[], int n)
{
    int i;
    int maxim=-1;
    for(i=1;i<=n;i++)
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
    int array[MAX], size_array, i, k,j,m;
    scanf("%d", &size_array);
    for(i=1;i<=size_array;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=1;i<size_array;i++)
    {
        for(j=i+1;j<=size_array;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j+1;k<=size_array;k++)
                {
                    array[k-1]=array[k];
                }
                size_array--;
                j--;
            }
        }
    }
    m=max(array,size_array);
    printf("%d \n", m);

    for(i=1;i<=size_array;i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
