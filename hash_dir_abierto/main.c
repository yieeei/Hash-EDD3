# ifndef stdio_h
# include <stdio.h>
# define stdio_h
# endif

# ifndef stdlib_h
# include <stdlib.h>
# define stdlib_h
# endif

# ifndef hash_h
# include "hash.h"
# define hash_h
# endif

# ifndef nodo_h
# include "nodo.h"
# define nodo_h
# endif

typedef struct _cabecera{
	int cantidadDatos,
	    cantidadNodos;
	char tipoTabla;	
}Cabecera;


Cabecera *inicializar_cabecera();
void imprimir_cabecera(Cabecera *cabecera);

Cabecera *inicializar_cabecera(){
	Cabecera *cabecera=(Cabecera*)malloc(sizeof(Cabecera));
	cabecera->cantidadDatos=0;
	cabecera->cantidadNodos=0;
	cabecera->tipoTabla='a';
	return cabecera;
}

void imprimir_cabecera(Cabecera *cabecera){
	printf ("Cantidad de datos:\t%i", (cabecera->cantidadDatos));
	printf ("Cantidad de Nodos:\t%i", (cabecera->cantidadNodos));
	printf ("Tipo de tabla:\t%c", (cabecera->tipoTabla));
}

int main (){
	Cabecera* cabecera=inicializar_cabecera();
	Hash* hash=inicializar_hash();
	imprimir_cabecera(cabecera);
	imprimir_hash(hash);
	return 0;
}
