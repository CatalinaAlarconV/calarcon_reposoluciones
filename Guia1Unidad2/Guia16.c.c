#include <stdio.h>

int main (){

    int tabla [7][24];
    int i, j;



    for (i=0;i<7;i++){
        for (j=0;j<24;j++){
            printf ("ingrese numero de temperaturas (enteros) registradas: [%d][%d]", i+1,j+1);
            scanf("%d",&tabla [i][j]) ;


    }
}

      for(i=0; i<7; i++){
         for(j=0; j<24; j++){
            printf("%d",tabla[i][j]);
         }
         printf("\n");
      }



    return 0 ;
}


