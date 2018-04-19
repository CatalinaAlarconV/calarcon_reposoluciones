#include <stdio.h>
/*1)Se comienza nombrando la bibloteca con la cual se trabajará (<stdio.h>).
2) Se da la instrucción para ejecutar el programa ( int main () )
3)Se abre llave ({ )
3) Declarar variable (int(numero_limite).
4)Empezar a imprimir por pantalla  cada variable.(Printf, para imprimir y scanf para leer).
5)agregar "for" dando la condicion (int j=2;j<=numero_limite;j++) y  "if" para ver cada caso de resultado.
6)Imprimir por pantalla el resultado de la operación. 
7)Apllicar el return 0. 
8)Cerrar programa con la llave ( } )
9)Fin.
  */
int numero_limite;
int main(){
    printf("Ingrese una cantidad de numero y el sistema entre esos numeros calculará los numeros primos \n");
    scanf("%d", &numero_limite);
    
    for (int j=2;j<=numero_limite;j++){
    int a=0;
    
    for(int i=1;i<=numero_limite;i++)
    {
        if(j%i==0)
            a++;
    }
	if (a==2){
	printf("%d\n", j);
 }
 }
 
 return 0;
}
