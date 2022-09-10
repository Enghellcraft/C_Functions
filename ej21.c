#include<stdio.h>

float ganancia (float costo, float vend, float cant);

int main (void){

int iproc, id, cant, tot;
float costo, vend, gana, gantot;

printf ("Ingrese la cant de prod a procesar\n");
scanf ("%d", &iproc);
fflush (stdin);

while (iproc > 0){

    printf ("Ingrese la Id de prod a procesar\n");
    scanf ("%d", &id);
    fflush (stdin);
    printf ("Ingrese el costo de prod a procesar\n");
    scanf ("%f", &costo);
    fflush (stdin);
    printf ("Ingrese la cant de prod a procesar\n");
    scanf ("%f", &vend);
    fflush (stdin);
    printf ("Ingrese la cant de prod a procesar\n");
    scanf ("%d", &cant);
    fflush (stdin);

    tot = tot +  cant;

    iproc -= cant;

    gana = ganancia (costo, vend, cant);

    gantot = gantot + gana;

    printf ("la Ganancia del articulo %d es: %.2f\n", id, gana);
}
printf ("el total de prod vendidos es: %d", tot);
printf ("el total de ganancias es de: %f", gantot);
}

float ganancia (float costo, float vend, float cant){

float res;

res = (vend - costo) * cant;

return (res);
}
