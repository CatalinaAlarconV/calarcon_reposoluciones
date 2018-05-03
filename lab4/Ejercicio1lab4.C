/* 1- incluir libreria
 2- abrir el programa
 3-realizar funcion void
 4- realizar funcion int 
 5- llamar funcion
 6-cerrar el programa*/
 
#include <stdio.h>            
 
void inverso (int n1){
	int n2, n3, n4, resto1, resto2, resto3;
	resto1= n1%10;
	n2=n1-resto1;
	n3=n2/10;
	resto2=n3%10;
	n4=n3-resto2;
	resto3=n4/10;
	printf("%d", resto1);
	printf("%d", resto2);
	printf("%d", resto3);
}
int main ()
{	
	int n1;
	printf("ingrese un numero de 3 digitos: \n\n");
	scanf ("%d", &n1);
	if (99<n1 && n1<1000){
		inverso (n1);
	}
	else{
		printf("el numero ingresado no es valido");
	}	
	return 0;
}
