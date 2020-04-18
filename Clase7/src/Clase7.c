/*
 * Ejercicio 1:
 * Escribir la funcion calcularMayor(). La funcion debe recibir dos
 * numeros int y devolver por referencia, el numero mayor.
 * La funcion debe retornar un 1 si encontro un mayor, o un 0
 * si ambos numeros son iguales.
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
int calcularMayor(int* pResultado,int operador1, int operador2);

int main(void) {

    setbuf(stdout,NULL);
	int resultado;
	int num1,num2;

	utn_getNumero(&num1,"Ingrese primer numero", "No es un numero valido", 0, 999, 2);
	utn_getNumero(&num2,"Ingrese segundo numero", "No es un numero valido", 0, 999, 2);

	// luego llamo a la funcion calcularMayor()
	if(calcularMayor(&resultado,num1,num2)==0)
	{
		printf("Los numeros son iguales\n");
	}
	else
	{
		printf("El mayor es:%d\n",resultado);
	}

	return EXIT_SUCCESS;
}

int calcularMayor(int* pResultado,int operador1,int operador2)
{
	int retorno= -1;

	if(pResultado != NULL)
	{
		if(operador1==operador2)
		{
			retorno=0;
		}
		else
		{
		 if (operador1 < operador2)
		 {
			 *pResultado = operador2;
			 retorno = 1;
		 }
		 else
		 {
			 *pResultado = operador1;
			 retorno = 1;
		 }
		}
	}

	return retorno;
}
