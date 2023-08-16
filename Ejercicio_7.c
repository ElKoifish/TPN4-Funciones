#include <stdio.h>
#include <stdlib.h>

int mayor(int a, int b){
	int mayor;
	if (a==b) {
		printf("Son iguales \n\n");
	} else {
		if (a>b) {
			printf("%d es mayor \n\n",a);
	} else {
			printf("%d es mayor \n\n",b);
	}
	
}
	return mayor;
}

	
int main() {
	
	int a=0, b=0;
	printf("Ingrese el valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese el valor de b: \n");
	scanf("%d",&b);
	
	mayor(a,b);
	
	system("pause");
}
