#include <stdio.h>
#include <stdlib.h>
#define MAX 101
int main()
{
    int array[MAX], i, size_array, nr=0;
    float procent;
    scanf("%d", &size_array);
    if((size_array<=0)||(size_array>100))
    {
        printf("Imposibil.");
    }
    else
    {
    for(i=1;i<=size_array;i++)
    {
        scanf("%d", &array[i]);
    }
    for(i=1;i<=size_array;i++)
    {

        if(array[i]<5)
        {
            nr++;
        }
    }
    procent=(nr*100)/size_array;
    printf("%.3f", procent);
    }

    return 0;
}
