#include<stdio.h>
#include<stdlib.h>
int n,h,i,j;
void main(void){
	printf("Escriba un entero mayor que 1:  ");
	scanf("%d",&n);
	h = n -1 ;
	for(j=-h;j<=h;j++){
		for(i=0;i<=h;i++) 
			if(abs(i)+abs(j)<n)	printf("*"); 
			else printf(" ");
		printf("\n");}
	}
	
