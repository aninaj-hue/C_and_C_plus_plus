#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y, max = -1, m;

   scanf("%d", &n);
   while(n)
   {
      scanf("%d",&x);
      y = x;
      while(y > 9)
         y /= 10;
      if(y > max)
      {
         max = y;
         m = x;
      }
      else if(y == max && x > m)
         m = x;
      n--;
   }
   printf("%d", m);
   return 0;
}
