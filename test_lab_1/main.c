#include <stdio.h>
#include <stdlib.h>

#define max 1010
int main()
{
    int array1[max], array2[max],array3[max], i,size_array1,size_array2, j, k=0;
    scanf("%d", &size_array1);//citire dim primul tablou
    if((size_array1>=0)&&(size_array1<50))
    {
        for(i=1; i<=size_array1; i++)
        {
            scanf("%d", &array1[i]);//citire elementele tabloului 1
        }
    }
    else
    {
        printf("imposibil");
    }

    scanf("%d", &size_array2);//citeste dim al doilea tablou
    if((size_array2>=0)&&(size_array2<50))
    {

        for(j=1; j<=size_array2; j++)
        {
            scanf("%d", &array2[j]);// elementele tabloului 2
        }
    }
    else
    {
        printf("imposibil");
    }
    for(i=1; i<=size_array1; i++)
    {
        for(j=1; j<=size_array2; j++)
        {
            if(array1[i]==array2[j])
            {
                array3[k]=array1[i];
                k++;
            }
        }
    }
    int aux;
    for(i=0; i<k-1; i++)
    {
        for(j=i+1; j<k; j++)
        {
            if(array3[i]>array3[j])
            {
                aux=array3[i];
                array3[i]=array3[j];
                array3[j]=aux;
            }
        }
    }
    printf("%d\n", k);
    for(i=0; i<k; i++)
    {
        printf("%d ", array3[i]);
    }
    return 0;
}
