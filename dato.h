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

#ifndef STRING_H
#include <string.h>
#define STRING_H
#endif

typedef struct _datos{
	int pk,cod1;
	char pais[10],NN[2];
	float cod2,cod3;
	struct _datos *sgte;
}Datos;

void imprimir_datos(Datos *datos);
Datos *cargar_datos(Datos *dato, int *i);
int buscar_alfa(Datos* dato, int m);


void imprimir_datos(Datos *datos){
	printf("%i\t%s\t%i\t%f\t%f\t%s\n", (datos->pk), (datos->pais), (datos->cod1), (datos->cod2), (datos->cod3), (datos->NN));
}

Datos *cargar_datos(Datos *dato, int *i){
	FILE *archivo=fopen("expo201503.csv","r");
	while(!feof(archivo)){
		(*i)++;
		Datos *nuevo=(Datos*)malloc(sizeof(Datos));
		fscanf(archivo,"%i;%[^;];%i;%f;%f;%[^\n]\n",&nuevo->pk,nuevo->pais,&nuevo->cod1,&nuevo->cod2,&nuevo->cod3,nuevo->NN);
		if (dato==NULL){
			dato=nuevo;
		}
		else {
			Datos *aux=dato;
			while(aux->sgte!=NULL){
				aux=aux->sgte;               
			}
			aux->sgte=nuevo;
		}
	}
	return dato;
}

int buscar_alfa(Datos* dato, int m){
	return ((dato->pk)%m);
}

Datos *inicializar_datos(int clave){
	Datos *nuevo=(Datos*)malloc(sizeof(Datos));
	nuevo->pk=clave;
//	nuevo->pais=NULL;
	nuevo->cod1=0;
	nuevo->cod2=0.0;
	nuevo->cod3=0;
//	nuevo->NN=NULL;
	nuevo->sgte=NULL;
	return nuevo;
}
