#include <stdio.h>
/* 1- incluir libreria
 2- abrir el programa
 3-realizar funcion void
 4- realizar funcion int
 5- definir variables 
 6- llamar funcion
 7- imprimir por pantalla resultados
 8-cerrar el programa*/

float huevosregalados (float h, float thuevos){
	float i;
	i= h-(thuevos)/3;
	
	return i;
}
float calcularpago (float i, float thuevos){
	float pago;
	pago= (i *80)/ (thuevos/3);
	
	return pago;
}
int main ()
{
	float thuevos=8; 
	float hjuan= 5;
	float hmanuel=3;
	float j;
	float m;
	float pagojuan;
	float pagomanuel;
	
	j= huevosregalados (hjuan, thuevos);
	m= huevosregalados (hmanuel, thuevos);
	
	pagojuan = calcularpago (j, thuevos);
	pagomanuel = calcularpago (m, thuevos);
	
	printf ("La cantidad de dinero para pagar a juan es:%f\n", pagojuan);
	printf ("La cantidad de dinero para pagar a manuel es:%f\n", pagomanuel); 
	
	
	return 0;
}
