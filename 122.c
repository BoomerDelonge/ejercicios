#include<stdio.h>
int x;
void main(void){
	printf("ingrese un número positivo:\n");
	scanf("%d",&x);
	if(x % 9 == 0) printf("%d es múltiplo de 9",x);
	else 	printf ("%d no es múltiplo de 9",x);
	
	printf("\n");
	}
