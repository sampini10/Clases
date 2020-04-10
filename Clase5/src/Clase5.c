/*
 ============================================================================
 Name        : Clase5.c
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

	setbuf(stdout, NULL);
	int edad;


	if(utn_getNumero(&edad, "Ingrese edad:", "Esta edad no es valida", 1, 120, 3)==0)
	{
		printf("Ingresaste:%d\n" ,edad);
	}
	else
	{
		printf("NO ES CORRECTO\n");
	}


	return EXIT_SUCCESS;
}
