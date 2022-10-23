#include <stdio.h>
#define MAX_SIZE 100

void printArray(int arr[], int start, int len);

int main ()
{
	int arr[MAX_SIZE];
	int N, i;
	
	/*Garaas N toond utga onooh*/
	printf("Enter size of the array: ");
	scanf("%d", &N);
	
	/*Garaas massive elementuudiig oruulah*/
	printf("Enter elements in array: ");
	for(i=0; i<N; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Elements in the array: ");
	
	/*Recursive functiong duudaj ajiluulah*/
	printArray(arr, 0, N);
	return 0;
}
void printArray(int arr[], int start, int len)
{
		/*Recursive duusah nohtsol*/
	if (start>=len)
	return;
	
	printf("%d", arr[start]);
	
	/*Recursive ooroo ooriigoo end duudaj bn*/
	printArray(arr, start+1, len);
}
