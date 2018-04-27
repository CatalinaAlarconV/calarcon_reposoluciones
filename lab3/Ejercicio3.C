#include <stdio.h>
#include <stdlib.h>
/*1)comienzo nombrando la bibloteca a trabajar (<stdio.h>), (<stdlib.h>).
2)doy instruccion "int" y defino variables .
3)doy instrucción "for" de 0 a 20.
4)imprimo por pantalla el dinero que pertenece al mes.
5)aplico return más la variable a calcular.
6)Doy instrucción para ejecutar el programa ( int main () )
7)Se abre llave ({ )
8) Declararo variable (int(pagototal).
9)Empiezo a imprimir por pantalla el pago total.
10)Apllicar el return 0. 
11)Cerrar programa con la llave ( } )
12)Fin */

int totalcuenta ()
{
	int pagototal= 0, B , anteriorpago;
	
	anteriorpago = 10;
	
	for (B=0 ;B<=20; B++){
	pagototal= pagototal + anteriorpago;
	
	printf ("para el mes %d su pago es de: %d\n", B+1, anteriorpago);
	
	anteriorpago = anteriorpago * 2;
	
}
	return pagototal;
	
}

int main ()
{
	int pagototal;
	
	pagototal= totalcuenta ();
	
	printf ("pago total: %d\n\n", pagototal);
	
	return 0;
}
