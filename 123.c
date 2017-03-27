#include<stdio.h>
char op;
int x, y, opr;
void main(void){
	printf("Ingrese el operador (+,-,/,*):");
	scanf("%c",&op);
	printf("Ingrese los números a operar:");
	scanf("%d %d",&x,&y);

	switch(op){
		case '+' : {opr = x + y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '-' : {opr = x - y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '*' : {opr = x * y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		case '/' : {opr = x / y ; printf("%d %c %d = %d",x,op,y,opr);break;}
		}
	printf("\n");
	}
