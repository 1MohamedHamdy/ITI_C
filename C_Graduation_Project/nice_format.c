#include<stdio.h>
#include<stdlib.h>
#include<string.h>  
#include"STD.h"
#include <time.h>

//only try Nice Format 
void apply_format(){
	FILE * filePointer;
	char dataToBeRead[300];
	

	filePointer = fopen("format.txt","r");
	while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
	{
        printf( "%s" , dataToBeRead ) ;
    }
	fclose(filePointer);
}