#include<stdio.h>


#include<stdio.h>

void ordena_tres_numeros (int *mayor, int *medio, int *menor);

int main (void){

int n1, n2, n3, *mayor, *menor, *medio;

printf ("Ingrese un numero;\n");
scanf ("%d", &n1);
fflush (stdin);

printf ("Ingrese un numero;\n");
scanf ("%d", &n2);
fflush (stdin);

printf ("Ingrese un numero;\n");
scanf ("%d", &n3);
fflush (stdin);

mayor = &n1;
medio = &n2;
menor = &n3;

ordena_tres_numeros (&n1, &n2, &n3);

printf ("De mayor a menor: %d, %d, %d", *mayor, *medio, *menor);
}

void ordena_tres_numeros (int *mayor, int *medio, int *menor){

int temp, temp1;

if (((*medio)>(*mayor))&&((*mayor)>(*menor))){
    temp = *mayor;
    *mayor = *medio;
    *mayor = temp;
}
if (((*menor)>(*mayor))&&((*medio)>(*mayor))){
    temp = *mayor;
    *mayor = *menor;
    *menor = temp;
}
if (((*menor)>(*mayor))&&((*mayor)>(*medio))){
    temp = *mayor;
    temp1 = *menor;
    *menor = *medio;
    *medio = temp;
    *mayor = temp1;
}
if (((*mayor)>(*menor))&&((*menor)>(*medio))){
      temp = *medio;
     *medio = *menor;
     *menor = temp;
}
}
