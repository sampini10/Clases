/*
 * Ejercicio 3: Definir una funcion validarFloat() que reciba un array de chars en donde los
 * caracteres representan un numero decimal. La funcion deberá devolver en su valor de retorno
 * si la cadena recibida contiene o no un valor numerico en formato texto.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h> // siempre tiene que estar para trabajar con strings


int validarNumeroFloat(char* stringRecibido);

int main(void)
{
	char numero[8];

	numero[0]='7';
	numero[1]='4';
	numero[2]='.';
	numero[3]='7';
	numero[4]='\0';

	if(validarNumeroFloat(numero)==1)
	{
		printf("Es un numero flotante %f.",atof(numero));
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
	int contadorPuntos=0;

    for(i=0;stringRecibido[i]!='\0';i++)
    {
        if(stringRecibido[i]<'0' || stringRecibido[i]>'9')
        {
        	// no estoy en el rango de los numeros
        	if(stringRecibido[i]=='.') // es un punto
        	{
        		contadorPuntos++;
        		if(contadorPuntos>1)
        		{
        			// encontre un segundo punto, doy error
                    retorno=0;
                    break;
        		}
        	}
        	else
        	{
        		//Hay algo que no es un punto ni numero
        		if(i==0)
        		{
        			// me pongo a ver que onda con el caracter
        			if(stringRecibido[i]!='+' && stringRecibido[i]!='-')
        			{
        				retorno=0;
        				break;
        			}
        		}
        		else
        		{
        			retorno=0;
        			break;
        		}
        	}
        }
    }
    return retorno;
}

/*
#include <stdio.h>
#include <stdlib.h>

static int validarFloat(que recibe)
{
	algoritmo aplicar ?? para validar elformato
	en la cadena solo haya caracteres de numeros '0' '1'... '9'
	puede haber un '.' PERO SOLO UNO
	puede haber un '+' PERO SOLO ADELANTE DE TODO

	que devuelve?
}

int main(void) {

	char numero[8];

	// prueba 1
	numero[0]='3';
	numero[1]='.';
	numero[2]='1';
	numero[3]='4';
	numero[4]='\0';
	//strcpy(numero,"3.14");
	//snprintf(numero,8,"%f",3.14);
	//snprintf(numero,8,"%s","3.14");


	// prueba 2
	numero[0]='2';
	numero[1]='3';
	numero[2]='5';
	numero[3]='7';
	numero[4]='\0';

	// prueba 3
	numero[0]='2';
	numero[1]='.';
	numero[2]='5';
	numero[3]='.';
	numero[4]='9';
	numero[5]='\0';

	// prueba 4
	numero[0]='h';
	numero[1]='o';
	numero[2]='l';
	numero[3]='a';
	numero[4]='\0';


	if(validarFloat(numero)==1)
	{
		printf("El numero %s es valido, se puede convertir a float!\n",numero);
	}

	return EXIT_SUCCESS;
}
*/
