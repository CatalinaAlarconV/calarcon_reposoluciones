#include <stdio.h>
/*1)comienzo nombrando la bibloteca a trabajar (<stdio.h>).
2)Doy instrucción para ejecutar el programa ( int main () )
3)Se abre llave ({ )
3) Declararo variables (int(dosis,gota,droga;).
4)Empiezo a imprimir por pantalla  cada variable.
5)Realizar operación para calcular droga.
6)realizo operación para calular las gotas.
7)Imprimir por pantalla el resultado de la operación. 
8)Apllicar el return 0. 
9)Cerrar programa con la llave ( } )
10)Fin.
  */
int main()
{
    int peso,mg=25;
    float dosis,gota,droga;
    printf("Ingrese el peso de la persona con un numero entero:\n\n");
    scanf("%d",&peso);
    dosis= (peso*0.2);
    printf("la cantidad de miligramos que le corresponden es: %f \n\n", dosis);
    
  
    droga=(100*dosis)/500;
  
    gota=(droga*mg)/3;
    
    printf("la cantidad de gotas que debe ingerir 3 veces al dia son: %f", gota);
    printf("\n");

    return 0;
}
