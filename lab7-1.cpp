
#include <stdio.h>
#include <stdlib.h>

int functionP(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int y){
    return a6*y*y*y*y*y*y + a5*y*y*y*y*y + a4*y*y*y*y + a3*y*y*y + a2*y*y + a1*y + a0;
}

int main()
{
    int a0, a1, a2, a3, a4, a5, a6, x1, x2, x3;
    x1 = 1;
    x2 = 3;
    x3 = 4;
    printf("a0=");
    scanf("%d", &a0);
    printf("a1=");
    scanf("%d", &a1);
    printf("a2=");
    scanf("%d", &a2);
    printf("a3=");
    scanf("%d", &a3);
    printf("a4=");
    scanf("%d", &a4);
    printf("a5=");
    scanf("%d", &a5);
    printf("a6=");
    scanf("%d", &a6);
    printf("x=1 uyd hariu: %d\n", functionP(a0, a1, a2, a3, a4, a5, a6, x1+1) - functionP(a0, a1, a2, a3, a4, a5, a6, x1));
 printf("x=3 uyd hariu: %d\n", functionP(a0, a1, a2, a3, a4, a5, a6, x2+1) - functionP(a0, a1, a2, a3, a4, a5, a6, x2));
 printf("x=4 uyd hariu: %d\n", functionP(a0, a1, a2, a3, a4, a5, a6, x3+1) - functionP(a0, a1, a2, a3, a4, a5, a6, x3));
    return 0;
}

