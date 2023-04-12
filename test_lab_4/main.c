#include <stdio.h>
#include <stdlib.h>
#define MAX 1010

int main()
{
    float array1[MAX], array2[MAX];
    int  size_array,i,j;
    float produs=0;
    scanf("%d", &size_array);
    if(size_array<=0  || size_array>100)
    {
        printf("Imposibil");
    }
    else
    {
        for(i=1; i<=size_array; i++)
        {
            scanf("%f", &array1[i]);
        }
        for(i=1; i<=size_array; i++)
        {
            scanf("%f", &array2[i]);
        }
        for(i=1; i<=size_array; i++)
        {
            produs=(array1[i]*array2[i])+produs;
        }
        printf("Produsul scalar este %.2f", produs);
    }

    return 0;
}
