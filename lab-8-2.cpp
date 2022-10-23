#include <stdio.h>
#include <stdlib.h>
int main()
{
	int B[5];
	int i;
	printf("%s%10s\n", "massive element", "utga");
	for (i=0; i<5; i++)
	{
		B[i]=1;
		printf("%d %d \n", i, B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
