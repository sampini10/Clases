#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definiciones.h"

void cargar_cocheCarga(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN])
{
	printf("---CARGAR COCHES DE CARGA---\n");
	for(int i = 0; i < CARGA_LEN; i++)
	{
		printf("Ingrese los datos para el coche de carga %d: \n",i);
		printf("Ingrese Matricula: \n");
		scanf("%s",carga[i].matricula);
		printf("Ingrese año de fabricacion: \n");
		scanf("%d", &carga[i].fechaFabricacion);
		printf("Ingrese tipo (Abierto/Cerrado)\n");
		scanf("%s", carga[i].tipo);
		printf("Revision mecanica 2020 (Si/No)\n");
		scanf("%s", carga[i].revicionMecanica);
		printf("---CARGADO---\n");
	}
}
void listar_cocheCarga(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN])
{
	printf("---LISTA DE COCHES DE CARGA---\n");
	for(int i = 0; i < CARGA_LEN; i++)
		{
			printf("Coche de carga nº %d \n",i);
			printf("Matricula: %s\n",carga[i].matricula);
			printf("Fecha de fabricacion: %d\n",carga[i].fechaFabricacion);
			printf("Tipo: %s\n",carga[i].tipo);
			printf("Revision mecanica 2020: %s\n",carga[i].revicionMecanica);
			printf("------------------\n");
		}
}
void cargar_cochePasajero(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN])
{
	printf("---CARGAR COCHES DE PASAJEROS---\n");
		for(int i = 0; i < PASAJERO_LEN; i++)
		{
			printf("Ingrese los datos para el coche de pasajeros %d: \n",i);
			printf("Ingrese Matricula: \n");
			scanf("%s",pasajero[i].matricula);
			printf("Ingrese año de fabricacion: \n");
			scanf("%d", &pasajero[i].fechaFabricacion);
			printf("Ingrese cantidad de asientos: \n");
			scanf("%d", &pasajero[i].cantAsientos);
			printf("Operativo (Si/No) \n");
			scanf("%s", pasajero[i].operativo);
			printf("---CARGADO---\n");
		}
}
void listar_cochePasajero(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN])
{
	printf("---LISTA DE COCHES DE PASAJEROS---\n");
		for(int i = 0; i < PASAJERO_LEN; i++)
			{
				printf("Coche de pasajeros nº %d \n",i);
				printf("Matricula: %s\n",pasajero[i].matricula);
				printf("Fecha de fabricacion: %d\n",pasajero[i].fechaFabricacion);
				printf("Cantidad de asientos: %d\n",pasajero[i].cantAsientos);
				printf("Operativo: %s\n",pasajero[i].operativo);
				printf("------------------\n");
			}
}
void ordenar_cargaFechaDescendente(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN])
{
	printf("---ORDENAR COCHES DE CARGA POR FECHA DESCENDENTE---\n");

	struct cocheCarga aux;
	for(int i = 0; i < CARGA_LEN; i++)
	{
		for(int j = 0; j < CARGA_LEN; j++)
		{
			if((carga[j].fechaFabricacion < carga[i].fechaFabricacion))
			{
				aux = carga[i];
				carga[i] = carga[j];
				carga[j] = aux;
			}
		}
	}

	printf("\n---COCHES DE CARGA, ORDENADOS POR FECHA DESCENDENTE---\n");
}
void ordenar_cargaTipoAscendente(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN])
{
	printf("---ORDENAR COCHES DE CARGA POR TIPO ASCENDENTE---\n");

		struct cocheCarga aux;
		for(int i = 0; i < CARGA_LEN; i++)
		{
			for(int j = 0; j < CARGA_LEN; j++)
			{

				if(strcmp(carga[j].tipo, carga[i].tipo) > 0)
				{
					aux = carga[i];
					carga[i] = carga[j];
					carga[j] = aux;
				}
			}
		}

		printf("\n---COCHES DE CARGA, ORDENADOS POR TIPO ASCENDENTE---\n");
}
void calcular_cochePasajeroAntiguo(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN])
{
	printf("\n---BUSCANDO COCHE DE PASAJEROS MÁS ANTIGUO---");

	struct cochePasajero aux;
	aux.fechaFabricacion = 99999;
	for(int i = 0; i < PASAJERO_LEN; i++)
	{
		if(aux.fechaFabricacion > pasajero[i].fechaFabricacion)
		{
			aux = pasajero[i];
		}
	}
		printf("\nCoche de pasajeros más antiguo es: \n");
		printf("Matricula: %s\n",aux.matricula);
		printf("Fecha de fabricacion: %d\n",aux.fechaFabricacion);
		printf("Cantidad de asientos: %d\n",aux.cantAsientos);
		printf("Operativo: %s\n",aux.operativo);
		printf("------------------\n");
}
void calcular_totalAsientos(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN])
{
	printf("\n---CALCULANDO CANTIDAD DE ASIENTOS---\n");

	int suma = 0;

	for(int i = 0; i < PASAJERO_LEN; i++)
	{
	  suma = suma + pasajero[i].cantAsientos;
	  printf("Cantidad de asientos del coche %d es: %d\n",i,pasajero[i].cantAsientos);
	}

	printf("\nTOTAL DE ASIENTOS: %d\n",suma);

}
