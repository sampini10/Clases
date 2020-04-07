/*
 * utn.c
 *
 *  Created on: 7 abr. 2020
 *      Author: sampini
 */

#include <stdio.h>
#include <stdlib.h>

int dividir (float* pResultado,int operador1,int operador2)
{
	float resultado;
	if(pResultado != NULL && operador2 != 0)//Siempre que reciba un puntero, debo verificar que sea distinto que NULL
	{
		resultado = (float) operador1 / operador2;
		*pResultado = resultado;
		return 0;
	}
	return -1;
}


