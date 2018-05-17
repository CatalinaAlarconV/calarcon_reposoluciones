/*
1)Indico librerias
2)Declaro funcion para un numero
3)Doy instruccion para ejecutar el programa
4)Defino variables
5)agrego while para generar opciones "a" y "b".
6)agrego un if y else para determinar si "a" es mayor a "b" o "b" es mayor a "a", para ver cual ganó.
7)imprimo por pantalla el numero de veces que he ganado durante el juego.
8)aplico return 0
9)fin del programa

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numaleatorio (){
	int numero;
	numero = rand()%100;
	return numero;
}

int main ()
{
	int a,b;
	char opcion;
	char fin='S';
	int ganador;
	int perdedor;
	ganador=0;
	perdedor=0;
	srand (time(NULL));
	
	while (fin=='S'){
		printf("A o B\n");
		scanf(" %c", &opcion);
		a=numaleatorio();
		b=numaleatorio();
		printf ("el numero generado para a es: %d\n",a);
		printf ("el numero generado para b es: %d\n",b);
		if (opcion=='A' && a>b){
			ganador++;
		
			printf("HAS GANADO\n");
		}
			else if (opcion== 'B'&& b>a){
				ganador++;
			
			printf("HAS GANADO\n");
			
		}
		else {
			perdedor++;
			printf("HAS PERDIDO\n");
		
		printf ("Quieres probar otra vez? (S/N): \n");
		scanf (" %c",&fin);
		while(getchar()!='\n');
	
	}
	printf("HAS GANADO ESTE NUMERO DE VECES: %d",ganador);
}
	
	
	return 0 ;
}
