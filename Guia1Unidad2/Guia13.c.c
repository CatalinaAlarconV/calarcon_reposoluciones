//Cree una matriz cuadrada A de NxN, luego pida al usuario rellenarla. Al final del proceso, entregue al un resumen
//con: La matriz, la sumatoria de los valores de sus filas y luego la sumatoria de los valores de toda la matriz.

#include <stdio.h>

int main (){

   int matriz [50][50];
   int i, j, filas, columnas, suma=0, malo;

   printf ("ingrese el numero de filas:");
   scanf ("%d", &filas);
   printf ("ingrese el numero de columnas:");
   scanf("%d", &columnas);


   for (i=0;i<filas;i++){
    for(j=0;j<columnas;j++){
        printf("digite un numero matriz: [%d][%d]", i+1,j+1);
        scanf("%d",&matriz [i][j]);
    }
   }
    printf ("\n");
    printf ("matriz generada:");
    printf ("\n");

   for (i=0; i<filas; i++){
    for (j=0;j<columnas;j++){
        printf("%d", matriz[i][j]);
    }
    printf ("\n");
   }

    printf ("Suma de sus elementos:");
    printf ("\n\t");

    int sumas=0;
    for (i=0;i<filas;i++){
        for (j=0;j<columnas;j++){
            sumas += matriz [i][j];

}

    printf("Calculando, espere un momento...");
    printf ("\n");
}

    if (matriz[i][j]< suma){
        scanf ("%d",&sumas);
    }
        else {
            printf("La suma total es de:%d",sumas);

        }


    return 0;

}
