#include<stdio.h>
#include<stdlib.h>
 int main()
{
	int UserAge ;
	printf("Ta nasaa oruulna uu?");
	scanf("%d" ,&UserAge);
	if(UserAge < 20)
	{ 
		printf("Uswur Nas");
	}
	else {
		if(UserAge == 20 && UserAge < 40 )
		{
			printf("Zaluu Nas");
		}
		else {
			printf("Ahimag Nas");
		}
		
	}
	system("pause");
	return 0 ;
}
