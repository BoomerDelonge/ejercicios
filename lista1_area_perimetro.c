#include<stdio.h>
int x,y,r,p,area;
void main(void){
	printf("Ingrese las longitudes de los lados de un triángulo rectangulo de menor a mayor:\n");
	scanf("%d %d %d",&x,&y,&r);
	p = x + y +r ;
	area = (x*y)/2 ;
	printf("Su área es %d y su perimetro es %d\n",area,p);
	}
	
