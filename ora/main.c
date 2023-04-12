#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h, m, s;
    printf("Introduceti ora h= ");
    scanf("%d", &h);
    printf("Introduceti minutele m= ");
    scanf("%d", &m);
    printf("Introduceti secundele= ");
    scanf("%d", &s);
    if(s>59)
    {
        m+=s/60;
        s=s%60;
    }
    if(m>59)
    {
        h+=m/60;
        m=m%60;
    }
    if(h>=24)
        h=h-24;
    if(h<10)
        printf("0 %d", h);

    else

        printf("%d ;", h);

    if(m<10)

        printf("%d 0",m);

    else

        printf("%d",m);

    if(s<10)
        printf(" %d 0",s);
    else

        printf("%d :", s);
    return 0;
}
