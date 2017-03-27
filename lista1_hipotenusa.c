#include<stdio.h>
#include<math.h>
int x,y,r;
void main(void){
	printf("Ingrese la longitud de los catetos: \n");
	scanf("%d %d",&x,&y);
	x = pow(x,2);
	y = pow(y,2);
	x = x + y;
	r = sqrt(x);
	printf("La hipotenusa del triángulo mide: %d \n",r);
	}
