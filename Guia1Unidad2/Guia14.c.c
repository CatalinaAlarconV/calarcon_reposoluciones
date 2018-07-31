/*Dada una matriz cuadrada A, un programa que permita detectar si dicha matriz es sim´etrica3
Se
considera que una matriz es sim´etrica si A[i,j] = A[j,i] y esto se cumple para todo i distinto de j. La
simetria es respecto a la diagonal principal.*/
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

   if (matriz[filas][columnas]=matriz[columnas][filas]){
        printf ("La matriz es simetrica.");
   }
    else{
        printf ("La matriz ingresada no es simetrica.");

  }
    return 0;
}
