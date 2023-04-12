#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b>=c)&&(a+c>=b)&&(b+c>=a))
    {
        printf("Da");
    }
    else
    {
        printf("Nu");
    }
    return 0;
}
