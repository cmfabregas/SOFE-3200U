/*Task1
**task1.c
**By: Carlos Fabregas
**Nov 13, 2016
**Objective: the function of this program is to calculate how long it takes
**for random characters to be written in Spam.txt
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "generator.h"


int main()
{
    clock_t start,end;
    //double elapsedTime;    
    FILE *toWrite = fopen("Spam.txt","w");
    
    start = clock(); // timer starts
    generate(toWrite);
    end = clock(); // timer ends 

    printf("Elapsed: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);//outputs elapsed time
    
    return 0;
}