#include<stdio.h>
#include<stdlib.h>
int main () {
	int r , y ;
	printf ("r=");
	scanf ("%d" , &r);
	switch (r){
		case :{
			y=r*r;
			printf ("%d", y);
			break;}
		case :{
			y=(r+1)/r*r;
			printf ("%d" ,y);
			break;
		}
	}
	system("pause");
	return 0;
}
