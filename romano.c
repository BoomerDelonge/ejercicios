#include<stdio.h>

void main(void){
	int x,y,z;
	printf("Escribir un número entre 1 y 99:\n");
	scanf("%d",&x);
	y = x / 10 ;
	switch(y){
		case 1: {printf("X");break;}
		case 2: {printf("XX");break;}
		case 3: {printf("XXX");break;}
		case 4: {printf("XL");break;}
		case 5: {printf("L");break;}
		case 6: {printf("LX");break;}
		case 7: {printf("LXX");break;}
		case 8: {printf("LXXX");break;}
		case 9: {printf("XC");break;}	} 
	z = x - y*10 ; 
	switch(z){
		case 1: {printf("I");break;}
		case 2: {printf("II");break;}
		case 3: {printf("III");break;}
		case 4: {printf("IV");break;}
		case 5: {printf("V");break;}
		case 6: {printf("VI");break;}
		case 7: {printf("VII");break;}
		case 8: {printf("VIII");break;}
		case 9: {printf("IX");break;}
		case 0: {printf(" ");break;}	} 
		
	printf("\n");
}
