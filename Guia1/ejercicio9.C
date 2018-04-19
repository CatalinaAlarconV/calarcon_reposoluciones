#include <stdio.h>
 
int main ()
{
	int sueldo_base, sueldo_total, ventas;
	float comisiones;
	printf ("ingresar el sueldo base: ");
	scanf ("%d",&sueldo_base);
	printf ("ingrese numero de ventas: ");
	scanf ("%d",&ventas);
	
	comisiones = ventas * 0.07 ;
	sueldo total = sueldo_base + comisiones ;

	//printf ("calculo de la comision: $ %f", comisiones);
	//printf ("calculo de sueldo total: $ %d", sueldo_total);

	return 0;
}
