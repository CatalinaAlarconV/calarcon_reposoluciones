//Escriba un programa que cree una matriz
 //cuadrada A de NxN, luego rell´enela de ceros y asigne 1
 //ensu diagonal principal1 En otras palabras genere una matriz identidad2 de 6x6.

 #include <stdio.h>

 int main ()
 {
     int matriz[2][6] = {1,0,0,0,0,0 , 0,1,0,0,0,0};
     int a , b;

     for (a=0; a<2; a++){
        for (b=0; b<6; b++){
            printf("%d", matriz[a] [b]);

            }


        printf ("\n");


}
    int matriz2 [2][6]= {0,0,1,0,0,0 , 0,0,0,1,0,0};
    int c , d;

    for (c=0; c<2; c++){
        for (d=0; d<6; d++){
            printf ("%d", matriz2 [c][d]);
        }

        printf ("\n");
    }


    int matriz3 [2][6]= {0,0,0,0,1,0 , 0,0,0,0,0,1};
    int e, f;

    for (e=0; e<2; e++){
        for (f=0; f<6; f++){
            printf ("%d", matriz3 [e][f]);
        }


        printf("\n");
    }
     return 0 ;
 }
