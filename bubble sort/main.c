#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Introduceti numarul de elemente al vectorului: ");
    scanf("%d", &n);

    int v[100];
    int i;
    for (i = 1; i <= n; i++)
        scanf("%d", &v[i]);

    int j;
    int sortat;
    do
    {
        sortat = 1;
        for (i = 1; i <= n-1; i++)
        {
            if (v[i] > v[i+1])
            {
                int aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                sortat = 0;
            }
        }
    }
    while(sortat == 0);
    printf("Vectorul sortat crescator este: \n");
    for (i = 1; i <= n; i++)
        printf("%d\n",v[i]);

    return 0;

}
