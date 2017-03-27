#include<stdio.h>
char x,y;
void main(void){
	
	printf("¿Te gusta bailar?  ");
	scanf("%c",&x);
	printf("¿Te gusta cantar?  ");
	getchar();
	scanf("%c",&y);
	if(x=='s' && y=='s'){
		printf("Llévame contigo");}
		else {
			if(x=='s' && y=='n')
				printf("Te enseñaré a cantar");
				else	
					if(x=='n' && y=='s')
						printf("Te enseñaré a cantar"); 
						else
							printf("Fuera de acá aburrido");}
	printf("\n");
	}
