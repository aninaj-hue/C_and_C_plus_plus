#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calculDiametru (double raza);
double calculCircumferinta(double raza);
double calculArie(double raza);
int main()
{
double a, r,d,c;
printf("Introduceti valoarea razei ");
scanf("%lf", &r);
d=calculDiametru(r);
printf("DIAMETRUL ESTE : %lf \n", d);
c=calculCircumferinta(r);
printf("CIRCUMFERINTA ESTE: %lf \n", c);
a=calculArie(r);
printf("ARIA ESTE : %lf ", a);
    return 0;
}
double calculDiametru(double raza)
{return 2*raza;}
double calculCircumferinta(double raza)
{
    return M_PI*2*raza;
}
double calculArie (double raza)
{
    return raza*raza*M_PI;
}
