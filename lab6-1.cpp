#include <stdio.h>

int
main ()
{
  int n,  i, j, sum = 0, f = 1;

  printf ("n=");
  scanf ("%d", &n);

  for (i = 0; i <= n; i++){
      if (i == 1 || i % 2 == 1){
	  for (j = 1; j <= i; j++)
	    {
	      f = f * j;
	    }
	  sum = sum + f;
	  f = 1;
	}
    }

  printf ("urd dun=%d", sum);
  return 0;
};
