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
	     tamano;
	char tipoTabla;	
}Cabecera;

Cabecera *inicializar_cabecera(){
	Cabecera *cabecera=(Cabecera*)malloc(sizeof(Cabecera));
	cabecera->cantidadDatos=0;
	cabecera->tamano=0;
	cabecera->tipoTabla='a';
	return cabecera;
}

int main (){
	Cabecera* cabecera=inicializar_cabecera();
	Hash* hash=inicializar_hash();
	return 0;
}

