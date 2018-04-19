#include <stdio.h>

/*Este programa calcula el precio de gasolina por cada galor que surte */

int main ()
{
	int precio;
	float litros, galones;
	printf ("inserte numero de galones: ");
	scanf ("%f",&galones);

	litros = galones * 3.735 /1 ;
	precio = 820 * litros ;
	
	//printf ("resultado de litros: %f", litros)
	//printf ("calcuo del precio: %d", precio);

	return 0 ;
}
