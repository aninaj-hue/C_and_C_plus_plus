#include <stdio.h>
#include <stdlib.h>
int n,v[100],i,x,y,r;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    for(i=0;i<n;i++)
        printf("%d ",v[i]);
    printf("\n");
    scanf("%d",&r);
    int ok=0;
    for(i=0;i<n;i++){
        if(r==v[i])
        {
            if(!ok){
                ok=1;
                x=y=i;
            }
            y=i;
        }
    }
    if(x&&y)
        printf("prima pozitie: %d\nultima pozitie: %d",x+1,y+1);
    else
        printf("numbarul nu este gasit");
    return 0;
}
