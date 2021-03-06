# ifndef stdio_h
# include <stdio.h>
# define stdio_h
# endif

# ifndef stdlib_h
# include <stdlib.h>
# define stdlib_h
# endif

#ifndef TIME_H
#include <time.h>
#define TIME_H
#endif

# ifndef hash_h
# include "hash.h"
# define hash_h
# endif

# ifndef nodo_h
# include "nodo.h"
# define nodo_h
# endif


typedef struct _cabecera{
	Nodo *nodo;
	int cantidadDatos,
	    cantidadNodos;
	char tipoTabla;	
}Cabecera;


Cabecera *inicializar_cabecera();
void imprimir_cabecera(Cabecera *cabecera);

Cabecera *inicializar_cabecera(){
	int i=0;
	Cabecera *cabecera=(Cabecera*)malloc(sizeof(Cabecera));
	cabecera->nodo=cargar_archivo(&i,cabecera->nodo);
	cabecera->cantidadDatos=6;
	cabecera->cantidadNodos=i;
	cabecera->tipoTabla='a';
	return cabecera;
}

void imprimir_cabecera(Cabecera *cabecera){
	printf ("Cantidad de datos:\t%i\n", (cabecera->cantidadDatos));
	printf ("Cantidad de Nodos:\t%i\n", (cabecera->cantidadNodos));
	printf ("Tipo de tabla:\t%c\n", (cabecera->tipoTabla));
}

int main() {
	Cabecera* cabecera=inicializar_cabecera();
	int m = (cabecera->cantidadNodos)%800;
	printf("Hash tendrá %i\n", m);getchar();
	Hash tablaHash[m];
//	insertar_nodo(11111,cabecera->nodo,m,NULL);
	buscar_nodo(1221,cabecera->nodo,m,NULL);
	inicializar_tabla_hash((cabecera->nodo),m,tablaHash);
//	insertar_nodo(11112,cabecera->nodo,m, tablaHash); 
	buscar_nodo(1221,cabecera->nodo, m, tablaHash);
	imprimir_cabecera(cabecera);
	imprimir_tabla_hash(m,tablaHash);

	return -1;
}
