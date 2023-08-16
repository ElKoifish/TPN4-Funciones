#include <stdio.h>
#include <stdlib.h>

int mostrar (int a,int b){
	int mostrar;
	printf("El valor de a es: %d\n",a);
	printf("El valor de b es: %d\n",b);
	
	return mostrar;
}

int main(){
	int a=0,b=0;
	printf("Ingrese valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese valor de b: \n");
	scanf("%d",&b);
	
	mostrar(a,b);
	
	system("pause");
}
