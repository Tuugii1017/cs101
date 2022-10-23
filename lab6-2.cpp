#include <stdio.h>

int
main ()
{
  int x, M,  i, j, f = 1;
  float z = 1.00;

  printf ("x=");
  scanf ("%d", &x);
  
  
  printf ("M=");
  scanf ("%d", &M);

  for (i = 3; i <=M; i++){
      if (i % 2 == 1){
          
	  for (j = 1; j <= i; j++)
	    {
	      f = f * j;
	    }
	    
	  z = z + (float(i) * float(x) / float(f));
	  f = 1;
	}
    }

  printf ("urd dun=%f", z);
  return 0;
};
