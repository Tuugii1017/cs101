#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int a,b,i,j,k,m,c=0;
	float min,sum,avg,S[6][20];
	printf("heden ulirliin GPA oruulah ve? :");
	scanf("%d", &a);
	printf("heden oyutnii GPA oruulah ve?");
	scanf("%d", &b);
	printf("\nGPA utguuda neg negeer ni oruulad ENTER tovch darna uu:");
	for (i=0; i<a; i++){
		for (j=0; j<b; j++){
			printf("\n S[%d][%d]=",i,j);
			scanf("%f",&S[i][j]);
		}
	}
	system("pause");
	sum=0;
	min=S [0][0]; k=0; m=0;
	for (i=0; i<a; i++)
	{
		for (j=0; j<b; j++)
		{
			sum=sum+S[i][j];
			c++;
			if (min<S[i][j])
			{
				min=S[i][j];
				k=i;
				m=j;
			}
		}
	}
	printf("max GPA avsan oyutan S[%d][%d]=:", k,m);
	printf("%f",min);
	printf("\n");
	avg=(sum/c);
	printf("Avarage of GPA=:%.4f\n", avg);
	printf("\n");
	
	int count = 0;
	for (i=0;i<a; ++i)
	{
		for (j=0; j<b; j++)
		{
			if (avg<S[i][j])
			{
				printf("Avarage GPA -s deesh duntei oyutan S[%d][%d]=:", i, j);
				printf("%f",S[i][j]);
				printf("\n");
				count++;
			}
		}
	}
	printf("\n niit %d bn", count);
	system("pause");
	return 0;
}
