#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
   printf ("Introduceti valoarea lui x= ");
   scanf("%d", &x);
   printf("Introduceti valoarea lui y= ");
   scanf("%d", &y);
   if(x==0 && y==0)
   {
       printf("Punctele coincid cu originea");
   }
   if(x>0 && y>0)
   {
       printf(" cadranul 1");
   }
   if(x<0 && y>0)
   {
       printf("cadranul 2");
   }
   if(x<0 && y<0)
   {
       printf("cadranul 3");
   }
   if(x>0 && y<0)
   {
       printf("cadranul 4");
   }
    return 0;
}
