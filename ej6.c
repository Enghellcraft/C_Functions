#include<stdio.h>

suma_intervalo (int, int);

int main (void) {

int x1, x2, suma;

printf ("\nIntroduce dos valores: ");
scanf ("%d%d", &x1, &x2);

suma = suma_intervalo (x1, x2);

printf ("\nLa suma de los valores del intervalo es: %d", suma);

return 0;
}

int suma_intervalo (int x1, int x2){

int suma;

while (x1<=x2){
    suma += x1;
    x1++;
}

return (suma);
}
