#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*CAPFIX.c
**September 27, 2016
**By: Carlos Fabregas & Cherlyne Santhirarajan
*/

//ReadData reads how many rows are in the multidimensional array and returns it
int ReadData(FILE *fpt, char first[20][30],char last[20][30])
{
  int total = 0;

  while(1)
  {
      if(fscanf(fpt,"%s %s",last[total],first[total]) !=2)
            return total;
    total++;
  }
}

/*Makes the first letter of each name Capital if it doesn't already do so and changes 
the rest of the characters to lowercase letters if they aren't already */
void CapFix(char word[30])
{

    int num = strlen(word);
    if(word[0]>= 'a' && word[0] <= 'z')
        word[0]=word[0]-'a'+'A';

    for(int i =1; i<num;i++)
    {
        if(word[i] >= 'A' && word[i] <='Z')
            word[i]=word[i]-'A'+'a';
    }

}

int main(int argc, char *argv[])
{

    FILE *fpt;
	char first[20][30],last[20][30];
	int i,j,total;

    if (argc != 2) {
		printf("Usage: CAPFIX [filename]\n");
		exit(0);
	}

	if ((fpt=fopen(argv[1],"r")) == NULL) {
		printf("Unable to open %s for reading\n",argv[1]);
		exit(0);
	}
 
    fpt=fopen(argv[1],"r");

	
    total=ReadData(fpt,first,last);//stores the internet value that is returned from the ReadData function



	/*fixes the capital letters of the first and last name by calling the capfix function and 
	passing first and last name through it's parameters */
    for(i=0; i<total; i++)
    {
        CapFix(first[i]);
        CapFix(last[i]);
    }
    
	//prints out both first and last names of every single row.
    for(i=0; i<total; i++)
        printf("%s %s \n", first[i], last[i]);

    return 0;
}
