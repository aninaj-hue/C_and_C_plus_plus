#include<stdio.h>

#define MAX_SIZE 1010

float array1[MAX_SIZE];
float array2[MAX_SIZE];

int main()
{
    int size, k=0;
    scanf("%d",&size);
    if(size>=0&&size<100)
    {
        for(int i=0; i<size; i++)
            scanf("%f",&array1[i]);

        for(int i=0; i<size; i++)
        {
            if(array1[i]>=10)
            {
                array2[k]=array1[i];
                k++;
            }
        }
        if(k>0&&k<=100)
        {
            float aux;
            for(int i=0; i<k-1; i++)
                for(int j=i+1; j<k; j++)
                {
                    if(array2[i]>array2[j])
                    {
                        aux=array2[i];
                        array2[i]=array2[j];
                        array2[j]=aux;
                    }
                }
            printf("%d\n",k);
            for(int i=0; i<k; i++)
                printf("%.2f ",array2[i]);
        }
        else
            printf("Imposibil");
    }
    else
        printf("Imposibil");
    return 0;
}
