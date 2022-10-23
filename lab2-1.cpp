#include <stdio.h>
int main (){
	int n, num;
	scanf("%d", &num);
	while(num>=10)
	{
		num/=10;
	}
	printf("%d ehnii oron", num, n);
	return 0;
}
