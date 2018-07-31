#include <stdio.h>
#include <stdlib.h>


int main(){
int matriz[50][50];
int i,j,filas,columnas;

   printf("\nIngresa tamaño de Filas : ");
   scanf("%d",&filas);
   printf("\nIngresa tamaño de Columnas : ");
   scanf("%d",&columnas);

      for(i=0; i<filas; i++){
         for(j=0; j<columnas; j++){
            printf("[%d][%d] = ",i,j);
            scanf("%d",&matriz[i][j]);
         }
      }
      printf("\nMatriz original");
      printf("\n");
      for(i=0; i<filas; i++){
         printf("\n");
            for(j=0; j<columnas; j++){
            printf(" %d ",matriz[i][j]);
         }
      }
      printf("\nMatriz cambiada");
      printf("\n");
         for(i=0; i<columnas; i++){
            printf("\n");
               for(j=0; j<filas; j++){
               printf(" %d ",matriz[j][i]);
         }
      }
      printf("\n\n");
   }


