#include<stdio.h>

void ordena_dos_numeros (int *mayor, int *menor);

int main (void){

int n1, n2, *mayor, *menor;

printf ("Ingrese un numero;\n");
scanf ("%d", &n1);
fflush (stdin);

printf ("Ingrese un numero;\n");
scanf ("%d", &n2);
fflush (stdin);

mayor = &n1;
menor = &n2;

ordena_dos_numeros (&n1, &n2);

printf ("De mayor a menor: %d, %d", *mayor, *menor);
}

void ordena_dos_numeros (int *mayor, int *menor){

int temp;

if ((*menor)>(*mayor)){
    temp = *mayor;
    *mayor = *menor;
    *menor = temp;
}


}
