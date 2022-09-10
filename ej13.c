#include<stdio.h>

int suma_cuad (int);

int main (void){

int n, suma;

printf ("ingrese el numero de los primeros naturales a sumar sus cuadrados:\n");
fflush (stdin);
scanf ("%d",&n);

suma = suma_cuad (n);

printf ("La suma es: %d", suma);

return 0;

}

int suma_cuad (int n){

int i=1, j=0, suma;

while (i<=n){
    j= j + (i*i);
    i++;
}

suma=j;

return (suma);

}
