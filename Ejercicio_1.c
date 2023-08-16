#include <stdio.h>
#include <stdlib.h>

int mostrar (){
	int a=0,b=0;
	printf("Ingrese valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese valor de b: \n");
	scanf("%d",&b);
	printf("El valor de a es: %d\n",a);
	return b;
}

int main(){
	printf("El valor de b es: %d\n",mostrar());
	system("pause");
}
