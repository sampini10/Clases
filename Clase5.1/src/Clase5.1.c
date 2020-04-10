/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout,NULL);
	int numeros[7];
	int x=0;

	//Ejemplo1
	do{
		numeros[x] = 5;
		x=x+1;

	}while (x<7);

	//Ejemplo2, son equivalentes

	int i;
		for(i=0; i<7; i++)
		{
			numeros[i] = 5;
		}



	return EXIT_SUCCESS;
}
