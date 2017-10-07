//Promedio
#include<stdio.h>
#include <conio.h>
int a,b,c,d;
float promedio;
#define div 3;

int main(){
	printf("Dame tu valor a");
	scanf("%d",&a);
	printf("Dame tu valor b");
	scanf("%d",&b);
	printf("Dame tu valor c");
	scanf("%d",&c);
	d=a+b+c;
	promedio=d/div;
	printf("El promedio es: %lf",promedio);
	
}
