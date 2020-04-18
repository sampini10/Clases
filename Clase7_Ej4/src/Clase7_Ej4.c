/*
 * Ejercicio 4:
 * Completar la funcion getFloat() para que devuelva un numero float
 * ingresado por el usuario
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getFloat(float* pResultado);
int isFloat (char stringRecibido[]);


int main(void) {

	setbuf(stdout, NULL);
	float precio;

	printf("Ingrese un precio:");

	if(getFloat(&precio)==1)
	{
		printf("El precio es valido:%f",precio);
	}
	else
	{
		printf("Valor incorrecto");
	}

	return EXIT_SUCCESS;
}

int getFloat(float* pResultado)
{
	char buffer[128];
	int retorno = 0;

	fgets(buffer,sizeof(buffer),stdin);
	buffer[strlen(buffer)-1] = '\0'; // borro el enter

	/*
	int i;
	for(i=0; i<8; i++)
	{
		printf("%d %d %c\n",i,buffer[i],buffer[i]);
	}
	printf("-----------\n");
	*/

	if(isFloat(buffer)==1)
	{
		*pResultado = atof(buffer);
		retorno = 1;
	}
	return retorno;
}

int isFloat (char stringRecibido[])
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
