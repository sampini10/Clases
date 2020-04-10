/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define NUMEROS 5

void imprimirArray(int listaDeEdades[],int numeros);


int main(void) {

	setbuf(stdout, NULL);

	int edad;
	int edades[NUMEROS];
	int i;
//RECORRO PARA CARGAR FORMA SECUENCIAL
	for(i=0; i<NUMEROS; i++)
	{

	if(utn_getNumero(&edad, "Ingrese edad:", "Esta edad no es valida", 1, 120, 3)==0)
		{

		edades[i] = edad;

		}
		else
		{
			printf("NO ES CORRECTO\n");
		}
	}

imprimirArray(edades, NUMEROS);

	return EXIT_SUCCESS;
}

void imprimirArray(int listaDeEdades[],int numeros)
{
	int i;
	for(i=0; i<numeros; i++)
	      {
	    	  printf("La edad: %d" , listaDeEdades[i]);
	      }
}
