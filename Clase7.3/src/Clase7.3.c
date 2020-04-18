#include <stdio.h>
#include <stdlib.h>
#include <string.h> // siempre tiene que estar para trabajar con strings

/*
 * Ejercicio 3: Definir una funcion validarFloat() que reciba un array de chars en donde los
 * caracteres representan un numero decimal. La funcion deberá devolver en su valor de retorno
 * si la cadena recibida contiene o no un valor numerico en formato texto.
 *
 */

int validarNumeroFloat(char* stringRecibido);

int main(void)
{
	setbuf(stdout,NULL);
	char numero[8];

	numero[0]='3';
		numero[1]='.';
		numero[2]='1';
		numero[3]='4';
		numero[4]='\0';

	if(validarNumeroFloat(numero)==1)
	{
		printf("Es un numero flotante.");
	}
	else
	{
		printf("No Es un numero flotante.");
	}

	return 0;
}

int validarNumeroFloat(char* stringRecibido)
{
    int retorno=1;
	int i;
    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if((stringRecibido[i]<'0' || stringRecibido[i]>'9') && (stringRecibido[i]!='.'))
        {
            retorno=0;
            break;
        }
    }
    return retorno;
}

	/* prueba 1
	numero[0]='3';
	numero[1]='.';
	numero[2]='1';
	numero[3]='4';
	numero[4]='\0';

	/ prueba 2
	numero[0]='2';
	numero[1]='3';
	numero[2]='5';
	numero[3]='7';
	numero[4]='\0';

	/prueba 3
	numero[0]='2';
	numero[1]='.';
	numero[2]='5';
	numero[3]='.';
	numero[4]='9';
	numero[5]='\0';

    prueba 4
	numero[0]='h';
	numero[1]='o';
	numero[2]='l';
	numero[3]='a';
	numero[4]='\0';
	*/

