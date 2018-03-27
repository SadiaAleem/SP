#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	int size=10;
	int *arr= (int*) malloc(sizeof(int)* size);


	for (i=0; i<10; i++)
	{
		arr[i] = size-1;
		
	}

	for (i=0;i<10;i++)
	{
		printf("%d", + arr[i]);		
		
	}
	printf("\n");

	int newsize=20;
	int *arr1=(int*) realloc(arr, sizeof(int)* newsize);
	int j=0;
	for(j=0; j<newsize; j++)
	{
		
		arr[j] = newsize-1;
	}
	for(j=0; j<newsize; j++)
	{
		printf("%d", + arr[j]);		
	}
	printf("\n");

	free(arr);

	return 0;
}
