#include <stdio.h>

long long
a_la_n (long long a, long long n)	// recursiv
{
  if (n == 0)
    {
      return 1;

    }
  else
    {
      return a * a_la_n (a, n - 1);
    }

}

int
main ()
{
  long long i, n, a;
  printf ("Introduceti valoarea lui n: ");
  scanf ("%lld", &n);
  scanf ("%lld", &a);
  printf (" a^n= %lld\n", a_la_n (a, n));

  return 0;
}
