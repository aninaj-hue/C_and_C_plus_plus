#include <stdio.h>
#include <stdlib.h>

int main()
{ int n, i, cif, cifmax;
   long long num, rez=0;
   scanf("%d", &n);
   for (i=1; i<=n; ++i)
   {
       scanf("%lld",&num);
       cifmax=0;
       while (num)
       {
           cif=num%10;
           if (cif>cifmax) cifmax=cif;
           num/=10;
       }
       rez=rez*10+cifmax;
   }
   rez*=rez;
   printf("%lld", rez);

   return 0;

}
