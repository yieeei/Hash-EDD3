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

typedef struct _hash{
	int alfa;
	Nodo *nodo;
}Hash;

void imprimir_tabla_hash(int m, Hash tablaHash[m]);
void inicializar_tabla_hash(Nodo *nodo, int m, Hash tablaHash[m]);

void imprimir_tabla_hash(int m, Hash tablaHash[m]){
	Nodo *aux;
	for (int i=0; i<m; i++){
		aux=tablaHash[i].nodo;
		while (aux!=NULL){
			imprimir_nodo(aux);getchar();
			aux=aux->sgte;
		}
	}
}

void inicializar_tabla_hash(Nodo *nodo, int m, Hash tablaHash[m]){
	int i=0; Nodo* aux;
	establecer_alfa(nodo,m);
	for (int j=0; j<m; j++){
		tablaHash[j].nodo=NULL;
	}
	while (nodo->sgte!=NULL){
		i=nodo->alfa;
		if (tablaHash[i].nodo==NULL){
			tablaHash[i].nodo=nodo; 
		}
		else{
			aux=tablaHash[i].nodo;
			while (aux->sgte!=NULL && aux->sgte->alfa==i){
				aux=aux->sgte;				
			}
			aux->sgte=nodo;
		}
		nodo=nodo->sgte;
	}
}
