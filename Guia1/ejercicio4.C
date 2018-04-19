#include <stdio.h>
#include <math.h>

/*El programa al recibir como dato la base y la altura del rectangulo, calcula el área y perímetro de este. */

int maian ()
{	
	float base;
	float altura;
	float perimetro;
	float area;
	printf("ingrese la base y la altura del rectangulo: ");
	scanf ("%f,%f", &base ,&altura);
	
	area = base * altura ;
	perimetro = 2 * (base + altura);

	//printf ("resultado area: %f", area);
	//printf ("resultado perimetro: %f, perimetro");

	return 0;
}
