#include<stdio.h>

double potenciacion(int,double);

double potenciacion (int n,double pot){

int i;
double potencia;

potencia = 1;
for (i=0; i<n; i++){
potencia = potencia * pot;}
printf ("%lf", potencia);
return (potencia);
}

int main () {

int n;
double pot, potencia ;

printf ("\n Introduzca la base y el exponente:\n");
scanf ("%lf", &pot);
scanf ("%d", &n);

potencia = potenciacion(n,pot);

printf ("\n La potencia es %lf", potencia);

return 0;
}
