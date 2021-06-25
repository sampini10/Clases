#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definiciones.h"

int menu()
{
	int auxOpcion;

	printf("\n---MENU---"
			"\n1-Ingresar coches de carga"
			"\n2-Listar coches de carga"
			"\n3-Ingresar coches de pasajeros"
			"\n4-Listar coches de pasajeros"
			"\n5-Ordenar coches de carga por año descendente"
			"\n6-Ordenar coches de carga por tipo ascendente"
			"\n7-Calcular el coche de pasajeros mas antiguo"
			"\n8-Calcular el total de asientos"
			"\n9-Salir\n");
	scanf("%d",&auxOpcion);

	return auxOpcion;
}
void hardcore_datos(int PASAJERO_LEN, int CARGA_LEN,struct cochePasajero pasajero[PASAJERO_LEN], struct cocheCarga carga[CARGA_LEN])
{
	//HARDCORE CARGA
	strcpy(carga[0].matricula, "ABC23");
	strcpy(carga[1].matricula, "FASD2");
	strcpy(carga[2].matricula, "4548A");
	strcpy(carga[3].matricula, "879EW");
	carga[0].fechaFabricacion = 1995;
	carga[1].fechaFabricacion = 1991;
	carga[2].fechaFabricacion = 1998;
	carga[3].fechaFabricacion = 1982;
	strcpy(carga[0].tipo, "Abierto");
	strcpy(carga[1].tipo, "Cerrado");
	strcpy(carga[2].tipo, "Cerrado");
	strcpy(carga[3].tipo, "Abierto");
	strcpy(carga[0].revicionMecanica, "No");
	strcpy(carga[1].revicionMecanica, "Si");
	strcpy(carga[2].revicionMecanica, "No");
	strcpy(carga[3].revicionMecanica, "Si");

	//HARDCORE PASAJEROS
	strcpy(pasajero[0].matricula, "ABC23");
	strcpy(pasajero[1].matricula, "FASD234");
	strcpy(pasajero[2].matricula, "4548AJAJ");
	pasajero[0].fechaFabricacion = 1995;
	pasajero[1].fechaFabricacion = 1991;
	pasajero[2].fechaFabricacion = 1998;
	pasajero[0].cantAsientos = 50;
	pasajero[1].cantAsientos = 50;
	pasajero[2].cantAsientos = 40;
	strcpy(pasajero[0].operativo, "Si");
	strcpy(pasajero[1].operativo, "No");
	strcpy(pasajero[2].operativo, "Si");

}
