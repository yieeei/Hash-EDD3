# ifndef stdio_h
# include <stdio.h>
# define stdio_h
# endif

# ifndef stdlib_h
# include <stdlib.h>
# define stdlib_h
# endif

# ifndef nodo_h
# include "nodo.h"
# define nodo_h
# endif

# ifndef dato_h
# include "dato.h"
# define dato_h
# endif

typedef struct _hash{ //nRanuras=5;
	Nodo *nodo[5];
}Hash;

Hash *inicializar_hash(){
	Hash* hash=(Hash*)malloc(sizeof(Hash));
	for (int i=0; i<5; i++){
		hash->nodo[i]=inicializar_nodo;
	}
	return hash;
	
}
