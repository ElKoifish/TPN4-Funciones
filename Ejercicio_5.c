#include <stdio.h>
#include <stdlib.h>

int resistencia (int R1, int R2, int R3, int R4, int R5){
	int resistencia;
	int RT;
	RT = R1+R2+R3+R4+R5;
	printf("El valor de las resistencias en total es: %d\n",RT);
	
	return resistencia;
}

int main()
{
	int R1,R2,R3,R4,R5;//Utilizar estructuras repetitivas para la carga.
	printf("Ingrese R1: ");
	scanf("%d",&R1);
	printf("Ingrese R2: ");
	scanf("%d",&R2);
	printf("Ingrese R3: ");
	scanf("%d",&R3);
	printf("Ingrese R4: ");
	scanf("%d",&R4);
	printf("Ingrese R5: ");
	scanf("%d",&R5);
	resistencia (R1,R2,R3,R4,R5);
	system("pause");
}
