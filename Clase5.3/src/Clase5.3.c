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
float calcularPromedio(int edades[], int numeros);
int main(void) {

	setbuf(stdout, NULL);

	int edad;
	int edades[NUMEROS];
	int i;
	float promedio;
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

promedio = calcularPromedio(edades, NUMEROS);
printf("Promedio: \n%f" ,promedio);


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
float calcularPromedio(int edades[], int numeros)
{

	float promedio;
	int i;
	int acumulador = 0;

	for(i=0; i<numeros; i++)
		{
			acumulador = acumulador + edades[i];

		}
	promedio = (float)acumulador/numeros;
	return promedio;
}




