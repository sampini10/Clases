/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 // EJERICIO: Pedirle al usuario 5 edades y LUEGO
	// imprimir las 5 edades. Definir un array de 5 posiciones.
	// y usar la funcion utn_getNumero() para pedir los valores


 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define NUMEROS 5

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
	//RECORRO PARA IMPRIMIR
	for(i=0; i<NUMEROS; i++)
      {
    	  printf("La edad: %d" , edades[i]);
      }




	return EXIT_SUCCESS;
}
