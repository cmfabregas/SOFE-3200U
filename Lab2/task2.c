/*task2.c
**By: Carlos Fabregas
**Oct 11, 2016
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *fP;
    FILE *toWrite = fopen("Dante.txt","w");
    char lineStored[1000];
          
    int n; //size of string being replaced

    if((fP =fopen("Input.txt", "r"))== NULL)
    {
        printf("File does not exist \n");
        exit(0);
    }

    //str length - str found + str replaced
    //strlen() - returns the length of str1 
    //strcpy() - copies str2 into str1
    //strcat() - adds string at the end of string
      while(fgets(lineStored,1000,fP))
    {         
        
        if(strstr(lineStored, "Inferno") != NULL)
        {
            replace(lineStored, "Inferno", "Paradiso");
        }

        if(strstr(lineStored, "In dark woods") != NULL)
        {
            replace(lineStored, "In dark woods", "using Windows 8.1");
        }
        if(strstr(lineStored, "those woods") != NULL)
        {
            replace(lineStored, "those woods", "Windows 8.1");
        }
        if(strstr(lineStored, "to enter") != NULL)
        {
            replace(lineStored, "to enter", "to use 8.1");
        }
        if(strstr(lineStored, "crest") != NULL)
        {
            replace(lineStored, "crest", "screen");
        }
        if(strstr(lineStored, "Below a hill") != NULL)
        {
            replace(lineStored, "Below a hill", "Before a monitor");
        }
        if(strstr(lineStored, "shoulders") != NULL)
        {
            replace(lineStored, "shoulders", "GUI");
        }
        if(strstr(lineStored, "planet") != NULL)
        {
            replace(lineStored, "planet", "Shakespeare");
        }

        fprintf(toWrite,"%s ", lineStored);//prints out line into textfile

    }      

        fclose(fP);
        return 0;
}


void replace(char *lineStored,char *target, char *output)
{

    char copiedLine[100]; //placeholder for the line with the new word
    char rightHolder[100]; //placeholder for the strings after the word found
    char *p;//pointer reference

    //sizeleft - size after the string was found
    //sizebforestr - size of array before string was found
    //totalsize - total size of array
    int sizeleft, sizebforestr, totalsize,x,n,i;
    int y=0;

        p =strstr(lineStored, target);
        n = strlen(target);

        sizeleft = strlen(p);
        totalsize = strlen(lineStored);
        sizebforestr = totalsize - sizeleft;
                      
        //for loop to copy line
        for(x=0; x < sizebforestr; x++)
        {
            copiedLine[x] = lineStored[x];
        }

        copiedLine[x] = '\0';
        strcat(copiedLine, output); //adds the output after first part of copied line is added to it
                
        //adds the rest of the words
        for(i=sizebforestr+n; i < totalsize; i++)
        {
            rightHolder[y] =  lineStored[i];
            y++;
        }  

        rightHolder[y]= '\0';
        strcat(copiedLine,rightHolder);
        strcpy(lineStored,copiedLine);
}


