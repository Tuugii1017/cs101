#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, i, sum=0;
	
	printf("Toogoo oruulna uu: \n");
	scanf("%d", &n);
	
	for (i=1; i<=n; ++i){
		sum +=i;
	}
	printf("Sum=%d", sum);
	return 0;
}
