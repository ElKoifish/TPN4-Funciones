#include <stdio.h>
#include <stdlib.h>

int v(int h, int m){
	int v;
	float totalp=h+m;
	float ph=(h*100)/totalp;
	float pm=(m*100)/totalp;
	
	printf("Porcentaje de hombres: %.2f \n",ph);
	printf("Porcentaje de mujeres: %.2f \n",pm);
	
	return v;
}

int main() {
	int h,m;
	printf("Ingrese el numero de hombres: ");
	scanf("%d",&h);
	printf("Ingrese el numero de mujeres: ");
	scanf("%d",&m);
	v(h,m);
	
	system("pause");
}
