#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
     int x1,x2,y1,y2;
    printf("Introduceti coordonatele punctelor carora doriti sa le aflati distanta: ");
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    float distanta=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("\nDistanta dintre A(%d, %d) si B(%d, %d) este: %.2f",x1,y1,x2,y2,distanta);
    return 0;
}
