#include <stdio.h>
#include <stdlib.h>
int main()
{
	int B[10];
	int i;
	printf("%s%10s\n", "massive element", "utga");
	for (i=0; i<10; i++)
	{
		B[i]=1+i*3;
		printf("%7d %13d \n", i, B[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
