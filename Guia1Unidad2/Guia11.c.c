//Escriba un programa que cree una matriz cuadrada A de NxN, luego rell´enela de ceros e impr´ımala en pantalla.//
/*
1-Incluyo libreria
2-Nombro la respectiva matriz con el numero de filas y columnas en este caso de indice 5
3-Relleno la matriz con ceros para fila y columna.
4-Con el bucle for se llena la matriz.
5- Imprimo los ceros.
6- Aplico salto de linea para tener los numeros ordenados.*/
#include <stdio.h>

int main ()
{
    int matriz[6][6] = {0,0,0,0,0,0 , 0,0,0,0,0,0};
    int i, j;

    for (i=0 ; i<6 ; i++){
    for (j=0 ; j<6 ; j++){
        printf ("%d", matriz[i][j]);


            }
            printf ("\n");
        }
    return 0;

}

