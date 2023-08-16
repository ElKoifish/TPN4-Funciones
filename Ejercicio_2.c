#include <stdio.h>
#include <stdlib.h>

int p (int a, int b){
	int p;
	p=(2*a)+(2*b);
	
	return p;
	
}
int area2 (int a, int b){
	int area2;
	area2=a*b;
	
	return area2;
}
int main(){
	
	int a=0, b=0, area=0, perimetro=0;
	
	printf("Ingrese el valor de a: \n");
	scanf("%d",&a);
	printf("Ingrese el valor de b: \n");
	scanf("%d",&b);
	
	perimetro=p(a,b);
	area=area2(a,b);
	
	printf("El valor del perimetro es: %d\n",perimetro);
	printf("El valor del area es: %d\n",area);
	
	system("pause");
}
