// Area de un circulo
#include <stdio.h>
#include <conio.h>
float area,radio,rad;
#define pi 3.1416;

int main()
{
printf("Dame el valor del radio");
scanf("%f",& radio);
rad= radio*radio;
area=rad*pi;
printf("El area del circulo es: %f",area);


getch();

}

