#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "definiciones.h"
#include "menu.h"

#define PASAJERO_LEN 3
#define CARGA_LEN 4

int main(void) {

	setbuf(stdout, NULL);
	int opcion;
	struct cochePasajero vecPasajero[PASAJERO_LEN];
	struct cocheCarga vecCarga[CARGA_LEN];

	//hardcore_datos(PASAJERO_LEN, CARGA_LEN, vecPasajero, vecCarga); //Ingreso datos para pruebas mas rapidas y no tener que volver a cargar los coches.

	do {
		opcion = menu();

		switch (opcion) {

		case 1:
			cargar_cocheCarga(CARGA_LEN, vecCarga);
			break;

		case 2:
			listar_cocheCarga(CARGA_LEN, vecCarga);
			break;

		case 3:
			cargar_cochePasajero(PASAJERO_LEN, vecPasajero);
			break;

		case 4:
			listar_cochePasajero(PASAJERO_LEN, vecPasajero);
			break;

		case 5:
			ordenar_cargaFechaDescendente(CARGA_LEN, vecCarga);
			break;

		case 6:
			ordenar_cargaTipoAscendente(CARGA_LEN, vecCarga);
			break;

		case 7:
			calcular_cochePasajeroAntiguo(PASAJERO_LEN, vecPasajero);
			break;

		case 8:
			calcular_totalAsientos(PASAJERO_LEN, vecPasajero);
			break;

		case 9:
			printf("Saliendo del programa"
					"\nHasta pronto...");
			break;

		default:
			printf("Opcion incorrecta, ingrese nuevamente una opcion valida\n");
		}

	} while (opcion != 9);

	return EXIT_SUCCESS;
}
