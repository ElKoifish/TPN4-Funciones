#include <stdio.h>
#include <stdlib.h>

int calculo (int presion, int superficie, int fuerza){
	int calculo;
	presion=superficie/fuerza;
	printf("\nLa presion de la superficie es: %d\n",presion);
	return calculo;
	
}

int main()
{
	int superficie,fuerza,presion;
	printf("Ingrese superficie: ");
	scanf("%d",&superficie);
	printf("Ingrese fuerza: ");
	scanf("%d",&fuerza);
	calculo (presion, superficie, fuerza);
	system("pause");
}
