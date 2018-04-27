#include <stdio.h>
#include <stdlib.h>
/*1)comienzo nombrando la bibloteca a trabajar (<stdio.h>), (<stdlib.h>).
2)doy instruccion (void) y defino variables 
3)aplico return más la variable a calcular
4)Doy instrucción para ejecutar el programa ( int main () )
5)Se abre llave ({ )
6) Declararo variables (int(sueldohoras, horastrabajadas, sueldototal, i).
7)Empiezo a imprimir por pantalla sueldohoras.
8)Agrego instrucción "for" desde 0 a 6 e iprimo por pantalla horasstrabajadas por cada día.
9)Imprimir por pantalla el resultado de la operación. 
10)Apllicar el return 0. 
11)Cerrar programa con la llave ( } )
12)Fin */

void	
		int sueldo (int sueldohoras, int horastrabajadas) {
		int sueldototal;
		
		sueldototal = (sueldohoras * horastrabajadas);
		

		return sueldototal;
		
	
}
	
int main ()
{		
		int sueldohoras , horastrabajadas, sueldototal=0, i ;
		printf ("ingrese el dinero que se le pagará por hora: \n\n");
		scanf ("%d",&sueldohoras);
		
		printf ("ingrese cada hora por cada día que usted trabajó: \n\n");
		
		for (i=0 ; i<=6; i++){
		
		printf ("día %1.d\n\n", i);
		printf ("ingrese las horas que trabajó: \n");
		scanf ("%d", &horastrabajadas);
		
		
	}
	
	
		printf ("El sueldo total a recibir es: %1.d",sueldototal);
		
		return 0 ;
		
}
					
