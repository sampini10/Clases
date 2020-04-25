/*
 * Producto.h
 *
 *  Created on: Apr 23, 2020
 *      Author: ernesto
 */

#ifndef PRODUCTO_H_
#define PRODUCTO_H_

#define NOMBRE_LEN	50
#define DESC_LEN	50

//defino el tipo de dato Producto
/*
struct S_Producto {
	char nombre[NOMBRE_LEN];
	char descripcion[DESC_LEN];
	float precio;
};
typedef	struct S_Producto Producto;
*/


typedef struct {
	char nombre[NOMBRE_LEN];
	char descripcion[DESC_LEN];
	float precio;
	int isEmpty;
}Producto;


void prod_imprimirProducto(Producto prod);
int prod_cargarProducto(Producto* pArray,int limite,int indice);
int prod_cargarProductov2(Producto* pArray,int limite,int indice);

#endif /* PRODUCTO_H_ */
