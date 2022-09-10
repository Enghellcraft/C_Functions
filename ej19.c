#include<stdio.h>

int cuentacifras (int);

int main (void){

int n, cuenta, res;

printf ("ingrese un numero: \n");
scanf ("%d", &n);
fflush (stdin);

res = cuentacifras (n);

printf ("Su cantidad de cifras es: %d", res);

}

int cuentacifras (int n){

int i=1;

while (n>1){
        n = n / 10;
          i++  ;
        }

return (i);
        }
