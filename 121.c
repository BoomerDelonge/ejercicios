#include<stdio.h>
int x;
void main(void){
	printf("Ingrese un número:\n");	
	scanf("%d",&x);
	if(x % 2 == 0)	printf("%d es par\n",x);
	else printf ("%d es impar\n",x);
	}
