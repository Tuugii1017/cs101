#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;
float niilber(){
	int m, u, t=1;
	float x, s;
	printf("x=");
	scanf("%f", &x);
	printf("M =");
	scanf("%d", &m);
	s=1;
	for(int i=1; i<=m; i++){
		u=1;
		t+=2;
		for(int j=1; j<=t; j++){
			u=u*j;
		}
		s=s+((t*x)/u);
		
	}
	return s;
}
int main(){
	float n;
	n=niilber();
	printf("niilber = %f", n);
	return 0;
}
