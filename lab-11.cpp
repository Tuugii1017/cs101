/**
* 3*3 haritsaatai matrix-iin utguudiig urjih uildel.
**/
#include<stdio.h>
#define ROW 3
#define COL 3
/*Matrix -iin oruulah, hewleh, vrjeh uildeliig uirdchilan zarlaj bn. */
void matrixInput(int mat[][COL]);
void matrixPrint(int mat[][COL]);
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL]);

int main()
{
int mat1[ROW][COL];
int mat2[ROW][COL];
int product[ROW][COL];
/*Ehnii 3*3 haritsaatai matrix-iin oruulah uildel*/
printf("Enter element in first matrix of size %dx%d\n", ROW,COL);
matrixInput(mat1);
/*Daraagiin 3*3 haritsaatai matrix-iin oruulah uildel*/
printf("Enter element in second matrix of size %dx%d\n", ROW,COL);
matrixInput(mat2);
/*Hoer matrix-iin urjih uildliig duudah funkts*/
matrixMultiply(mat1,mat2,product);
printf("Product of both matrices is:\n");
matrixPrint(product);
return 0;
}
/*Hereglegchiin oruulsan utgiig matrix-d olgoh funkts 
*oroltiin utga ni hoer hemjeest buhel toon turul bn.*/
void matrixInput (int mat[][COL])
{
	int row,col;
	for (row = 0; row < ROW; row++)
		{
			for (col = 0; col < COL; col++)
			{
	
			scanf("%d", (*(mat + row) + col));
			}
		}
	
}
/*Matrix-iin utgiig hevleh funkts*/
void matrixPrint(int mat[][COL])
{
int row, col;

	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
		// *(*(mat + i) + j) ene uildel mat[i][j]-tai ijil utgatai bn.
		printf("%d ", *(*(mat + row) + col));
		}
		printf("\n");
	}
}
/*Hoer mat1,mat2 matrix-uudiin utgiig tus burt ni vrjij res matrix-d onooj ogoh funkts*/
void matrixMultiply(int mat1[][COL], int mat2[][COL], int res[][COL])
{
	int row,col,i;
	int sum;
	for (row = 0; row < ROW; row++)
	{
		for (col = 0; col < COL; col++)
		{
			sum=0;
			for(i = 0; i < COL; i++)
			{
				sum +=(*(*(mat1+row)+i))*(*(*(mat2+i)+col));
			}
			/*2 martix-iin utguudiig urjij sum huvisagchaar nemj dawtal duussani daraa res matrix-d onooj ogch bn.*/
			*(*(res+row)+col)=sum;
		}
	}
	
}
