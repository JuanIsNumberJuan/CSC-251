/*
Juan Delgado
CSC-251
02/19/2020
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int array1[5] = {0,2,4,6,8};
	int array2[5] = {1,3,5,7,9};
	int temp;
	printf("Before Swap\n");	
	for(int a = 0; a < 5; a++)
	{
		printf("firstArray[%d] = %d, secondArray[%d] = %d \n",a,array1[a],a,array2[a]);
	}
	printf("After Swap\n");
	for(int a = 0; a < 5; a++)
	{
		temp = array1[a];
		array1[a] = array2[a];
		array2[a] = temp;
		printf("firstArray[%d] = %d, secondArray[%d] = %d \n",a,array1[a],a,array2[a]);
	}
	
}
