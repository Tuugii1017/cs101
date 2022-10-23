#include <stdio.h>
#include <stdlib.h>
int
main ()
{
  int k, r = 0;

  scanf ("%d", &k);

  if (k >= 10 && k <= 20)
    {
      r = r + k / 10 + k % 10;
    }
  else
    {
      while (k != 0)
	{
	  r = r * 10 + k % 10;
	  k /= 10;
	}
    }

  printf ("%d", r);
}
