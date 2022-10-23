#include<stdio.h>
#include<stdlib.h>
int main (){
	int R , Y ;
	printf ("R toonii utga oruulna uu");
	printf ("\n R=");
	scanf ("%d", &R);
	if (R%2==0){
		Y=R*R;
		printf ("%d", Y);}
		else if (R%2){
			Y = ((1+R) / R*R);
			printf ("%d", Y);
		}
	else {
		printf ("Buhel too bish ");
	}
	system ("pause");
	return 0;
}
