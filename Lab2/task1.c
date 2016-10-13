/*Task1
**task1.c
**By: Carlos Fabregas
**Objective: C program made to read a file and changing every character thats "a" to "b"
**Oct 4th, 2016
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *fP ;
   FILE *toWrite = fopen("Heaven.txt","w");
   int x;
   char lineStored[1000];

   if ( (fP = fopen("Input.txt", "r")) == NULL)
    {
        printf("File does not exist \n");
        exit(0);
    }
   
    //stores all the characters in a line on an array 
    while(fgets(lineStored,1000,fP))
    {
        for(x =0; x < 1000; x++)
        {
            if(lineStored[x] == 'a' )
            {
                lineStored[x] = 'b';
            }
        }
         fprintf(toWrite,"%s", lineStored);//prints out line into textfile
    }

        fclose(fP);
        return 0;

}
