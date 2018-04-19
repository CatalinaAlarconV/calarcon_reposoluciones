#include <stdio.h>
#include <stdlib.h>
/*1)Se comienza nombrando la bibloteca con la cual se trabajará (<stdio.h>) (<stdlib.h>).
2)Se la instrucción para ejecutar el programa ( int main () )
3)Se abre llave ({ )
3) Declarar variable (int(numero_maximo, a , b , c).
4) Aplico el uso de while
5)doy mi condición
6)imprimo por pantalla
7)Agrego "for" doy mi condición (a=1;a<= numero_maximo;a++)
8)Nuevamente aplico "for" con una nueva condicion (b=1;b<=a;b++) e imprimo por pantalla.
9)Aplico "if" doy una condición(b==a) , seguido del comando "for" más su condición(c=b-1;c>0;c--)
10)Imprimir por pantalla resultados. 
11)Apllicar el return 0. 
12)Cerrar programa con la llave ( } )
13)Fin.
  */
int main()
{
int numero_maximo,a,b,c;

	while (numero_maximo<1|| numero_maximo>9){
	printf("Ingrese un numero: \n");
	scanf("%d",&numero_maximo);}
	
	for(a=1;a<= numero_maximo;a++){

		for(b=1;b<=a;b++){
		printf("%d",b);

			if(b==a){

				for(c=b-1;c>0;c--){
				printf("%d",c);
				}
			}
		}
		printf("\n");
	}
return 0;
}
