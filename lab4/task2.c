/*task2.c
**By: Carlos Fabregas
**Nov 13, 2016
**Objective: 
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    FILE *fP;
    int count;
    char ch;


    if (argc != 3 || argv[2][1] != '\0') {
		printf("Usage: task2 [filename] [character]\n");
		exit(0);
	}

	if ((fP=fopen(argv[1],"r")) == NULL) {
		printf("Unable to open %s for reading\n",argv[1]);
		exit(0);
	}

    count=0;
    while((ch=fgetc(fP)) != EOF)
    {
        if(ch == argv[2][0])
        {
            count++;
        }
    }

    printf("There are %i characters of %c \n", count, argv[2][0]);


 fclose(fP);


}