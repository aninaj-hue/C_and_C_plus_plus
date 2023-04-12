#include<stdio.h>
#include<stdlib.h>
int *v;

void citire(int *size)
{
    scanf("%d",size);
    v=(int*)malloc((*size)*sizeof(int));
    for(int i=0; i<(*size); i++)
        scanf("%d",&v[i]);

}
void sortarecrescator(int *size)
{ int p,i,min=0,m;
    for(p=0;p<(*size-1);p++)
    {
        min=v[p];
        m=p;
        for(i=p+1;i<(*size);i++)
        {
            if(v[i]<min)
            {
                min=v[i];
                m=i;
            }
        }
    v[m]=v[p];
    v[p]=min;}

}
void sortaredescrescator(int *size)
{
    int aux;
    for(int i=0; i<(*size)-1; i++)
        for(int j=i+1; j<(*size); j++)
            if(v[i]<v[j])
            {
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
}
void afisare(int *size)
{
    for(int i=0; i<(*size); i++)
        printf("%d ",v[i]);
    free(v);
}
int main()
{
    int size;
    citire(&size);

    sortaredescrescator(&size);

    afisare(&size);
    printf("\n");

    sortarecrescator(&size);

    afisare(&size);

    return 0;
}
