/*
 * Ejercicio 2:
 * crear un programa que permita registrar el valor de temperatura maxima de cada dia de un mes.
 * Definir un array de floats de 31 posiciones. Cada posicion corresponderá a un dia
 * del mes. Hacer un programa con un menu de dos opciones, 1.imprimir array y 2.cargar array
 * Al elegir la opcion 1, se imprimira el indice y el valor de cada posicion del array.
 * Al elegir la opcion 2 que le pida al usuario que ingrese un numero de dia (1 a 31)
 * y luego que ingrese un valor de temperatura. Almacenar el valor en el indice correspondiente
 * Ambas opciones deben volver al menu ppal.
 * Utilizar la funcion utn_getNumeroFloat() de la biblioteca utn.h
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define TEMPERATURA 31
void imprimirArray(int days[],int day);

int main(void) {

	setbuf(stdout,NULL);
	float dias[TEMPERATURA];
	float dia;
	float imprimirArray;
	float respuesta;
	int opcion;
	float i;

	do {
		respuesta = utn_getNumeroFlotante(&opcion, "Seleccione una opcion:\n\n1-Imprimir Array\n2-Cargar Array\n3-Salir",1,3,2);
		if (!respuesta)
		{
			switch(opcion)
			{
			case 1:
				imprimirArray(dias, TEMPERATURA);
				break;

			case 2:
			for(i=0;i<TEMPERATURA; i++)
			{
		    if(utn_getNumeroFlotante(&dia, "Ingrese dia:\n","No es valida la temp.",-40,40,2)==0)
		    {
		    	dias[i] = dia;
		    }
			}
			}



			}
	}while (opcion != 3);


	return EXIT_SUCCESS;
}
void imprimirArray(int days[],int day)
{
	int i;
	for(i=0; i<day; i++)
	      {
	    	  printf("Los dias son: %d" , days[i]);
	      }
}ato
