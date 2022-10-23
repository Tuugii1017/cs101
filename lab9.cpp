#include <stdio.h>
#include <stdlib.h>
int main()
{
	int disp[3][3];
	int i, j, T;
	printf("T=");
	scanf("%d", &T);
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Enter value for disp[%d][%d]:", i, j);
			scanf("%d", &disp[i][j]);
		}
	}
	printf("two deminsional array elements:\n");
	for (i=0; i<3; i++) {
		for (j=0; j<3; j++) {
			if(T > disp[i][j]){
				printf("%d\t", disp[i][j]);
			if (j==2) {
				printf("\n");
			}
			}
		}
	}
	printf("\n");
	system("pause");
	return 0;
}
