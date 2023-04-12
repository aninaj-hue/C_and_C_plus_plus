#include <stdio.h>

int main()
{
     int n, c=-1;

   scanf("%d", &n);

   do{

       if(n%10>c&&n%10%2==0)

           c=n%10;

       n/=10;

   }while(n!=0);

   if(c==-1)

       printf("10");

   else

       printf("%d",c);

   return 0;

}
