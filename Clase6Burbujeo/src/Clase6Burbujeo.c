/*
 ============================================================================
 Name        : Clase6Burbujeo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_ALUMNOS 9
void printArray(int* pArray, int limite);

int main(void) {

setbuf(stdout, NULL);

int edades[QTY_ALUMNOS] = {54,26,93,17,77,31,44,55,27};
printArray(edades, QTY_ALUMNOS);




	return EXIT_SUCCESS;
}

int ordenarArray(int* pArray, int limite)





void printArray(int* pArray, int limite)
{
	int i;
	for(i=0;i<limite;i++)
	{
		printf("[DEBUG] INDEX: %d - VALUE: %d\n" ,i,pArray[i]);
	}
}
