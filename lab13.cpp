#include<stdio.h>
#include<stdlib.h>
int main(){
	FILE*fPtr;
	char ch;
	fPtr=fopen("C:/Users/HP ZBook/Desktop/tuguldur.txt","r");
	if(fPtr==NULL){
		printf("File-g neeh bolomjgui.\n");
		printf("File aa shalgana uu.\n");
		exit(EXIT_FAILURE);
	}
	printf("File amjilttai neegdlee.Ugugliig temdegteer in unshij baina. \n\n");
	do {
		ch = fgetc(fPtr);
		putchar(ch);
	}
	while (ch!=EOF);
	fclose(fPtr);
	return 0;
}
