#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
{
        int a, b, c, delta;
        printf("\nIntroduceti a=");
        scanf("%d", &a);
        printf("\nIntroduceti b=");
        scanf("%d", &b);
        printf("\nIntroduceti c=");
        scanf("%d", &c);
        if(a!=0)
        {
                delta=(b*b)-(4*a*c);
                printf("\Delta=%d", delta);

                        if(delta>0)

                {
                        printf("\nEcuatia are doua solutii reale distincte!");
                        printf("\nX1=%g", (-b+ sqrt(delta))/2/a);
                        printf("\nX2=%g", (-b- sqrt(delta))/2/a);
                }
                else
                {

                        if(delta=0)
                        {


                        printf("\nEcuatia are doua solutii reale egale %d", (-b)/(2*a));
                        }
                        else
                        if(delta<0)
                        {


                                printf("\nEcuatia are solutii complexe %ld, %ld", (-b)/(2*a), sqrt(-delta)/(2*a));
                        }


                }


        }

        else

        {

        if(b!=0)
                {
                printf("\nEcuatie de gradul I");
                printf("\nSolutia este %g", -c/b);
                }

        {
                if(c!=0)
                printf("\nEcuatie imposibila");
                else
                printf("\nEcuatie nedeterminata");
        }
        }
        return 0;
}
