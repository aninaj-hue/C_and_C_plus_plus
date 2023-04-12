#include <stdio.h>

float v[201],a,b;
int n,i,k=0;
int main()
{
    scanf("%d",&n);
    for(i=1; i<=n; i++)
       {scanf("%d", &v[i]);
    a=v[1];
    b=v[n];
    if(a>b)
    {
        v[1]=a;
        a=b;
        b=v[1];
    }}
    for(i=1; i<=n; i++)
       {if((v[i]<a)||(b<v[i]))
            k++;}
    printf("%d ",k);
    return 0;
}
