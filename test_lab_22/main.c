#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char a[201],cuvant[51],listaCuvinte[50][51],*p;
    fgets(a,sizeof(a),stdin);
    fgets(cuvant,sizeof(cuvant),stdin);
    int nrEl = 0;
    p = strtok(a," ");
    while(p)
    {

        strcpy(listaCuvinte[nrEl++],p);
        p = strtok(NULL," ");

    }
    int i,nrAparitii = 0;
    for (i = 0; i < nrEl; i++)
    {
        printf("%s\n", listaCuvinte[i]);
        if(strcmp(listaCuvinte[i],cuvant) == 0)
        {
            nrAparitii++;
        }

    }
    printf("%s\n", cuvant);
    printf("Cuvantul citit apare in text de %d ", nrAparitii);
    return 0;
}
