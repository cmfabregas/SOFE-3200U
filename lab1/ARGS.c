#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) 
{
	
	int i,j;
	
	printf("%c\n", argv[0][0]);
	
	
	for (i=0; i<argc; i++) 
	{
		j=0;
		while (argv[i][j] != '\0') 
		{
			printf("%c",argv[i][j]);
			j++;
		}
		printf("\n");
	}

	

	for (i=0; i<argc; i++)
		printf("%s\n",argv[i]); 
}
