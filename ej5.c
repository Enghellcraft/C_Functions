#include<stdio.h>

tabla_multiplicar (int);

int main (){

int i;

for (i=1; i<=10; i++){
        printf ("\nTabla de multiplicar del %d:\n", i);
        tabla_multiplicar (i);}

return 0;
}

tabla_multiplicar(int mul){

int j, multi;

for (j=0; j<=10; j++){
 multi = mul * j;
 printf ("%d", multi);
}


}
