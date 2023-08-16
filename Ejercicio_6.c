#include <stdio.h>
#include <stdlib.h>

int octavaparte (float numero){
	int octavaparte;
	float n;
	n=numero/8;
	printf("La octava parte de tu numero es: %f\n",n);
	
	return octavaparte;
	
}
int main()
{
	float numero;
	printf("Ingrese un numero: \n");
	scanf("%f",&numero);
	octavaparte(numero);
	system("pause");
}
