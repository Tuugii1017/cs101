#include <stdio.h>
#include <iostream>
using namespace std;
int arifDundaj(){
	int m,e,k=0,s=0;
	printf("M toog oruulna uu = ");
	scanf("%d",&m);
	printf("E toog oruulna uu = ");
	scanf("%d",&e);
	while(m<=e){
		k++;
		s+=m;
		m++;
	}
	return s/k;
}
main(){
	int dundaj;
	dundaj = arifDundaj();
	printf("arifmetik dundaj : %d",dundaj);
}
