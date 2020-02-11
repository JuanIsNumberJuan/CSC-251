/*
Juan Delgado
CSC-251
Lab 6
2-10-2020
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int x = 0, y = 0, z = 0;
	//printf("Enter a seed \n");
	//scanf("%d", &y);
	srand(time(NULL));
	//x = rand()%10;

	//printf("x = %d, y = %d, z = %d \n", x, y, z);

	for(int a = 0; a<=10; a++)
	{
		x = rand()%31;
		printf("%d\n" ,x+50);
	}
	return EXIT_SUCCESS;
}
