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


//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
int m, n;
char op;
void main(void){

	printf("Ingrese los números a operar:");
	scanf("%d %d",&m,&n);
	getchar();
	printf("Ingrese el operador (+,-,/,*):");
	scanf("%c",&op);
	
		
	if(op=='+') printf("suma = %d\n", m+n); // suma
	else{
			if(op=='-')
					printf("Resta = %d\n", m-n); // resta
			else{
				if(op=='*')
					printf("Multiplicación = %d\n", m*n); // multiplicación
				else{
					if(n==0) {printf("No definido!\n Vuelva a ingresar el número a dividir:\n"); 	
						scanf("%d",&n);
						printf("División = %.2f\n", (float)m/n);}
					else printf("División = %.2f\n", (float)m/n);}
			}
	}	
}
