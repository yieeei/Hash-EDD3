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

typedef struct _hach{
	Nodo *nodo;
	int cantidadDatos;
	int tamaño;
	char tipoTabla;	
}Hach;

Hash *inicializar_hash(){
	
}
