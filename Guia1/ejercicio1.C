#include <stdio.h>

int main ()
{
	int matricula;
	float n1, n2, n3;
	printf("ingrese numero de matricula: ");
	scanf ("%d",&matricula);
	printf ("ingrese nota 1: ");
	scanf ("%f", &n1);
	printf ("ingrese nota 2: ");		
	scanf ("%f", &n2);
	printf ("ingrese nota 3: ");
	scanf ("%f", n3);
	printf ("matricula: %d\n", matricula);
	printf ("promedio %f\n", (n1+n2+n3)/3);

	// printf ("nota 1: %f", n1);
	// printf ("nota 2: %f", n2);
	// printf ("nota 3: %f", n3);

	return 0 ;
}

		

