
#ifndef DEFICIONES_H_
#define DEFICIONES_H_
#define MATRIPASAJERO_LEN 10
#define MATRICARGA_LEN 5
#define OPERATIVO_LEN 4
#define TIPO_LEN 10

struct cochePasajero
{
	char matricula[MATRIPASAJERO_LEN];
	int fechaFabricacion;
	int cantAsientos;
    char operativo[OPERATIVO_LEN];
};

struct cocheCarga
{
	char matricula[MATRICARGA_LEN];
	int fechaFabricacion;
	char tipo[TIPO_LEN];
	char revicionMecanica[OPERATIVO_LEN];
};

void cargar_cocheCarga(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN]);
void listar_cocheCarga(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN]);
void cargar_cochePasajero(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN]);
void listar_cochePasajero(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN]);
void ordenar_cargaFechaDescendente(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN]);
void ordenar_cargaTipoAscendente(int CARGA_LEN, struct cocheCarga carga[CARGA_LEN]);
void calcular_cochePasajeroAntiguo(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN]);
void calcular_totalAsientos(int PASAJERO_LEN, struct cochePasajero pasajero[PASAJERO_LEN]);

#endif /* DEFICIONES_H_ */
