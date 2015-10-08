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

# define tam 5

typedef struct _hash{ //nRanuras=5;
	Nodo nodo[tam];
}Hash;

Hash *inicializar_hash();
void imprimir_hash(Hash *hash);
//PROBLEMA CON ESTRUCTURA HASH Y MANEJO DEL ARREGLO DE NODOS.
Hash *inicializar_hash(){
	Hash* hash=(Hash*)malloc(sizeof(Hash));
	for (int i=0; i<tam; i++){
		(hash.(nodo[i]))=inicializar_nodo();
	}
	return hash;
}

void imprimir_hash(Hash *hash){
	for (int i=0; i<tam; i++){
		if (nodo_es_vacio(hash.(nodo[i]))==0){
			Nodo *aux= (hash.(nodo[i]));
			do{	imprimir_nodo(aux);
				aux=aux->sgte;
			}while ( !nodo_es_vacio(aux->sgte) );
		}
	}
}
