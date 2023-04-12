#include <stdio.h>
#include <stdlib.h>
#define MAX 1010
int main()
{
    int  array1[MAX], array2[MAX], i,j, size_array1,size_array2,a,ok=0,k,b;
    scanf("%d",&size_array1);
    if((size_array1<=0)||(size_array1>50))
    {
        printf("Imposibil.");
    }
    else
    {
        for(i=1; i<=size_array1; i++)
        {
            scanf("%d",&array1[i]);
        }
    }
    scanf("%d",&size_array2);
    for(i=1; i<=size_array2; i++)
    {
        scanf("%d",&array2[i]);
    }

    for(i=1; i<=size_array2; i++)
    {
        a=array2[i];
        for(i=1; i<=size_array1; i++)
        {
            if(array1[i]==a)
            {
                ok=1;
            }
        }
    }

    if(ok==1)
    {
        printf("DA");
    }
    else
    {
        printf("NU");
    }
    return 0;
}
