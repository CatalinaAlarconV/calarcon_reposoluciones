#include <stdio.h>
/*1)comienzo nombrando la bibloteca a trabajar (<stdio.h>).
2)Doy instrucción para ejecutar el programa ( int main () )
3)Se abre llave ({ )
3) Declararo variables (int(goles_favor, goles_contra, puntaje).
4)Empiezo a imprimir por pantalla  cada variable.(Printf, para imprimir y scanf para leer).
5)agrego condicion "if" para ver cada caso de resultado.
6)Imprimir por pantalla el resultado de la operación. 
7)Apllicar el return 0. 
8)Cerrar programa con la llave ( } )
9)Fin.
  */
int main ()
{	
	int goles_favor, goles_contra, puntaje=0 ;

	printf ("Ingrese goles en contra: \n\n");
	scanf ("%d", &goles_contra);
	printf ("Ingrese goles a favor: \n\n");
	scanf("%d", &goles_favor);
		
	if ( goles_contra == goles_favor){
		puntaje = puntaje + 1 ;
	}
	if ( goles_contra < goles_favor){
		puntaje = puntaje + 3;
	}
		
	for (int= 0, i < 5 , i++){
		printf ("Ingrese goles en contra: \n\n");
	scanf ("%d", &goles_contra);
	printf ("Ingrese goles a favor: \n\n");
	scanf("%d", &goles_favor);
		
	if ( goles_contra == goles_favor){
		puntaje = puntaje + 1 ;
	}
	if ( goles_contra < goles_favor){
		puntaje = puntaje + 3;
	}
	
	printf ("Tus puntos son; %d", puntaje);
	
	return 0 ;
}
		
