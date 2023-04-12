#include <stdio.h>
#include <stdlib.h>

int main()
{//convertire din baza 10 in baza 2
    int nr, rezultat=0,putere=1;
    scanf("%d", &nr);
    while(nr)
    {
        int rest=nr%2;
        rezultat=rezultat+rest*putere;
        putere=putere*10;
        nr=nr/2;
    }
    printf("%d", rezultat);
    return 0;
}
