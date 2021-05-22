/*
 ============================================================================
 Name        : TP2Seba.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define PARADAS 5
#define VAGONES 7

int main(void) {
	setbuf(stdout, NULL);


	int opcion;
	int auxiliarParada;
	float auxiliarToneladas;
	int promedioParada = 0;
	int paradaMaxima = 0;
	float promedioTonelada = 0;
	float sumaPares = 0;
	int vectorParadas[PARADAS];
	float vectorToneladas[VAGONES];

	do{
		printf("\n OPCIONES DEL MENU"
				"\n1.Ingresar minutos de detención."
	   			"\n2.Ingresar peso transportado."
	   			"\n3.Listar minutos de detención"
	   			"\n4.Listar peso transportado"
				"\n5.Calcular tiempo promedio de detención."
				"\n6.Calcular tiempo maximo de detención"
				"\n7.Calcular la suma de toneladas transportadas."
				"\n8.Cuantos vagones de carga superan la media."
				"\n9.Calcular la suma de toneladas de vagones pares"
				"\n10.Salir\n");

				scanf("%d",&opcion);

				switch(opcion)
				{
				case 1:
					for(int i = 0; i < PARADAS; i++)
					{
						printf("\nIngrese los minutos de parada nº %d\n", i);
						scanf("%d", &auxiliarParada);
						vectorParadas[i] = auxiliarParada;
						printf("\nParada asignada correctamente: %d\n", vectorParadas[i]);

					}
					break;

				case 2:
					for(int i = 0; i < VAGONES; i++)
						{
							printf("\nIngrese el peso transportado en el vagon %d\n", i);
							scanf("%f", &auxiliarToneladas);
							vectorToneladas[i] = auxiliarToneladas;
							printf("\nTonelada agregada correctamente: %.2f\n", vectorToneladas[i]);
						}
					break;

				case 3:
					for(int i = 0; i < PARADAS; i++)
					{
						printf("\nParada nº %d fue %d minutos\n", i,vectorParadas[i]);
					}
					break;

				case 4:

					for(int i = 0; i < VAGONES; i++)
						{
							printf("\nEl vagon nº %d tiene %.2f toneladas\n", i,vectorToneladas[i]);
						}
						break;
				case 5:

					for(int i = 0; i < PARADAS; i++)
					{
						promedioParada = promedioParada + vectorParadas[i];
						printf("\nLa parada fue de %d minutos\n", vectorParadas[i]);
					}
					promedioParada = promedioParada / PARADAS;
					printf("\nEl promedio de las paradas es %d minutos\n", promedioParada);
					break;

				case 6:
					for(int i = 0; i < PARADAS; i++)
						{
							if(paradaMaxima < vectorParadas[i])
							{
								paradaMaxima = vectorParadas[i];
							}
						}
					printf("\nEl tiempo maximo de detencion fue %d minutos", paradaMaxima);
					break;

				case 7:
					for(int i = 0; i < VAGONES; i++)
						{
						  promedioTonelada = promedioTonelada + vectorToneladas[i];
						  printf("\nDetalles de toneladas en vagon %.2f\n", vectorToneladas[i]);
						}
					printf("\nLa suma de las toneladas es: %.2f", promedioTonelada);
					break;

				case 8:
					promedioTonelada = promedioTonelada / 7;
					printf("\nLa media de las toneladas es: %.2f", promedioTonelada);
					for(int i = 0; i < VAGONES; i++)
					{
						if(vectorToneladas[i] > promedioTonelada)
						{
							printf("\n El vagon nº %d es mayor a la media\n", i);
						}
					}
					break;

				case 9:
					for(int i = 0; i < VAGONES; i = i + 2)
					{
						sumaPares = sumaPares + vectorToneladas[i];
					}
					printf("\nLa suma de toneladas de vagones pares es: %.2f", sumaPares);
				     break;
				}

	}while(opcion != 10);



	return EXIT_SUCCESS;
}
