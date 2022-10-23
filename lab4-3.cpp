#include <stdio.h>

#include <stdlib.h>

int
main ()
{

  float a, b, c, max;

  scanf ("%f%f%f", &a, &b, &c);

  max = a;

  if (max < b)

    max = b;

  if (max < c)

    max = c;

  printf ("%f", max);

  system ("pause");

  return 0;

}
