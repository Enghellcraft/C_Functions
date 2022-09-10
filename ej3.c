#include<stdio.h>

int factorial (int n){

int i;
long factorial;

factorial = 1;
for (i=1; i<=n; i++){
factorial = factorial * i;}

return (factorial);
}
int main () {

int n;

printf ("\nIntroduzca un número entero positivo: ");
scanf ("%d", &n);

printf ("\nEl factorial de %d es: %ld",n, factorial(n));

return 0;
}
