/*
 ============================================================================
 Name        : Clase4.c
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


	float resultado;
	int numero1;
	int numero2;
	int respuesta;

	printf("\nNumero 1?:");
	//Agregar fflush
	scanf("%d",&numero1);

	printf("\nNumero 2?:");
	//Agregar fflush
	scanf("%d" ,&numero2);

	respuesta = dividir(&resultado,numero1,numero2);
	if (respuesta == 0)
	{
		printf("El resultado es: %f\n" ,resultado);
	}
	else
	{
		printf("No es posible dividir por cero\n");
	}




	return EXIT_SUCCESS;
}

