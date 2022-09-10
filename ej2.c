#include<stdio.h>

void maximo (){

int a, b, maximo;

scanf ("%d%d", &a, &b);

if (a> b) {maximo = a;}
else {maximo = b;}

printf ("\nEl máximo de %d y %d es %d", a, b, maximo);

}

int main(){

printf ("ingrese 2 numeros:\n");

maximo ();

return 0;
}
