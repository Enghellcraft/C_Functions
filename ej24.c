#include<stdio.h>

int main (void){

int op, subop, oldpass=0, newpass=0, extr, depo, saldo= 100000;

printf ("Seleccione una opcion:\n 1- Sacar Dinero \n 2- Depositar Dinero\n 3- Consultar Saldo\n 4- Cambiar la clave\n");
scanf ("%d", op);
fflush (stdin);

switch (op){
case 1:
    printf ("Ingrese el importe a extraer: \n");
    scanf ("%d", &extr);
    fflush (stdin);
case 2:
    printf ("Ingrese el importe a depositar: \n");
    scanf ("%d", &depo);
    fflush (stdin);
case 3:
    printf ("Seleccione la Opcioon: \n 1- CAJA DE AHORRO \n 2- CUENTA CORRIENTE \n");
    scanf ("%d", &subop);
    fflush (stdin);
    switch (subop){
            case 1: printf ("Su saldo es: $%d", saldo);
            case 2: printf ("Su saldo es: $%d", saldo);
    }
case 4:
    while (oldpass == newpass){
    printf ("Ingrese su clave: \n");
    scanf ("%d", &oldpass);
    fflush (stdin);
    printf ("Ingrese su nueva clave: \n");
    scanf ("%d", &newpass);
    fflush (stdin);}
}



}
