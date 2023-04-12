#include <stdio.h>
#include <stdlib.h>
#define  MAX 1010
float array1[MAX], array2[MAX];
int size_array1,size_array2,i,j;
int main()
{
    scanf("%d", &size_array1);
    if((size_array1>=0)||(size_array1<100))
    {
        for(i=1; i<=size_array1; i++)
        {
            scanf("%f", &array1[i]);
        }
        for(i=1; i<=size_array1; i++)
        {
            if(array1[i]>=10)
            {
                array2[size_array2]=array1[i];
                size_array2++;
            }
        }
        if((size_array2>=0)||(size_array2<100))
        {
            for(i=1; i<=size_array1; i++)
            {
                float aux;
                for(j=i+1; j<=size_array2; j++)
                {
                    if(array2[i]>array1[i])
                    {
                        aux=array2[j];
                        array2[j]=array1[i];
                        array1[i]=aux;
                    }
                }

            }
        }
        else
        {
            printf("Imposibil");
        }
        printf("%d \n", size_array2);
        for(i=1; i<=size_array2; i++)
        {
            printf("%.2f ", array2[i]);
        }
    }
    else
    {
        printf("imposibil");
    }
    return 0;
}
