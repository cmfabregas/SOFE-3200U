/*Task1
**task1.c
**By: Carlos Fabregas
**Nov 13, 2016
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

    printf("Elapsed: %f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    
    return 0;
}