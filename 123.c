#include<stdio.h>
char op;
int x, y, opr;
void main(void){
	
	printf("Ingrese los números a operar:");
	scanf("%d %d",&x,&y);
	getchar();
	printf("Ingrese el operador (+,-,/,*):");
	scanf("%c",&op);

	switch(op){
		case '+' : {opr = x + y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '-' : {opr = x - y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '*' : {opr = x * y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '/' : {opr = x / y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		}
	printf("\n");
	}
