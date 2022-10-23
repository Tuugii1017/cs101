#include <stdio.h>

int
main ()
{
  int n;

  printf ("n=");
  scanf ("%d", &n);

  int a, sum = 0, count = 0;

  for (int i = 1; i <= n; i++)
    {
      printf ("a-%d=", i);
      scanf ("%d", &a);
      if (a > 0)
	{
	  sum = sum + a;
	}
      else
	{
	  count++;
	}

    }

  printf ("eyreg toonuudiin niilber=%d\n", sum);
  printf ("sorog toonii gishuudiin too=%d", count);
}
